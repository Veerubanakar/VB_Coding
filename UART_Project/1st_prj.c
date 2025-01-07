/**************************************************************************************
 Simulating UART File operations using state machine in C
 Assume Ubuntu OS as the microcontroller and simulates UART using standard input/outpt
 *************************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

//UART States
typedef enum{
	UART_IDLE,
	UART_RECEIVE_COMMAND,
	UART_PROCESS_COMMAND,
	UART_EXECUTE_OPERATION,
	UART_SEND_RESPONSE
}UART_State;

//UART Command Types
typedef enum{
	CMD_NONE,
	CMD_CREATE_FILE,
	CMD_READ_FILE,
	CMD_APPEND_FILE,
	CMD_DELETE_FILE,
	CMD_WRITE_TO_FILE
}commandType;

commandType parse_command(const char *buffer);
void execute_command(commandType cmd, const char *argument);

char uart_buffer[256];
UART_State current_state = UART_IDLE;
commandType current_command = CMD_NONE;
bool command_ready = false;

commandType parse_command(const char *buffer){
	if (strncmp(buffer, "CREATE", 6) == 0) return CMD_CREATE_FILE;
	if (strncmp(buffer, "READ", 4) == 0) return CMD_READ_FILE;
	if (strncmp(buffer, "APPEND", 6) == 0) return CMD_APPEND_FILE;
	if (strncmp(buffer, "DELETE", 6) == 0) return CMD_DELETE_FILE;
	if (strncmp(buffer, "WRITE", 5) == 0) return CMD_WRITE_TO_FILE;
	return CMD_NONE;
}

void execute_command(commandType cmd,const char *argument)
{
	FILE *fp;
	switch(cmd){
		case CMD_CREATE_FILE:
			fp = fopen(argument, "w");
			if (fp){
			 printf("file %s created successfully.\n",argument);
			 fclose(fp);
			}else{
			printf("Error creating file:%s\n",argument);
			}
			break;
		case CMD_READ_FILE:
			fp = fopen(argument, "r");
			if(fp){
			char ch;
			printf("contents of %s:\n",argument);
			while((ch = fgetc(fp)) != EOF){
				putchar(ch);
			}
			fclose(fp);
			printf("\n");
			}else{
			printf("Error reading file:%s\n",argument);
	      		}
			break;
		case CMD_APPEND_FILE:
			fp = fopen(argument, "a");
			if(fp){
			fprintf(fp, "Hi veeru,How are you?.\n");
			printf("Text appended to %s successfully.\n",argument);
			fclose(fp);
			}else{
				printf("Error appending to file:%s\n",argument);
			}
			break;
		case CMD_DELETE_FILE:
			if(remove(argument) == 0){
				printf("File %s deleted successfully.\n",argument);
			}else{
				printf("Error deleting file:%s\n",argument);
			}
			break;
		case CMD_WRITE_TO_FILE:
			fp = fopen(argument, "w");
			if(fp){
			printf("Enter text to write to %s: ",argument);
			char write_buffer[256];
			fgets(write_buffer, sizeof(write_buffer), stdin);
			fprintf(fp, "%s", write_buffer);
			printf("Text written to %s successfully.\n",argument);
			fclose(fp);
			}else{
			printf("Error writing to file:%s\n",argument);
			}
			break;
		default:
			printf("Unknown command.\n");
			break;
	}
}

int main()
{
	printf("UART File operations: Enter commands in the format: COMMAND filename\n");

	while(1){
		switch(current_state){
			case UART_IDLE:
				//wait for incoming command
				printf("waiting for command...\n");
				current_state = UART_RECEIVE_COMMAND;
				break;

			case UART_RECEIVE_COMMAND:
				memset(uart_buffer, 0, sizeof(uart_buffer));
				if(fgets(uart_buffer, sizeof(uart_buffer), stdin)){
					command_ready = true;
					current_state = UART_PROCESS_COMMAND;
				}
				break;

			case UART_PROCESS_COMMAND:
				if(command_ready){
					char *argument = strchr(uart_buffer, ' ');
					if(argument){
						*argument = '\0';
						argument++;
						argument[strcspn(argument, "\n")] = '\0'; //remove newline character
						}
					current_command = parse_command(uart_buffer);
					command_ready = false;
					current_state = UART_EXECUTE_OPERATION;
				}
				break;

			case UART_EXECUTE_OPERATION:
				if(current_command != CMD_NONE){
					char *argument = strchr(uart_buffer, '\0') + 1;
					execute_command(current_command, argument);
				}
				current_state = UART_IDLE;
				break;

			case UART_SEND_RESPONSE:
				current_state = UART_IDLE;
				break;
		}
	}
	return 0;
}


