/*Deletes a file from system */

#include<stdio.h>

int main()
{
	if(remove("Veeresh.txt") == 0){
		printf("File deleted successsfully.\n");
	}else{
		printf("Error deleting file.\n");
	}
	return 0;
}
