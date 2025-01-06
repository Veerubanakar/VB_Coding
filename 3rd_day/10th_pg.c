/*C program to create a directory using mkdir() function*/
/*The mkdir() function is library function of <sys/stat.h> header file which is used to create a new directory with a new path.

Syntax
int mkdir(const char *path, mode_t mode);
The argument path defines the path of the directory, and the mode specifies the file permissions for the new directory file.

The function returns 0 if the directory created successfully, or -1 on failure.*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main()
{
	char dirname[20];
	int ret = 0;

	printf("Enter directory name: ");
	scanf("%s",dirname);

	ret = mkdir(dirname,0755);

	if(ret == 0)
	{
		printf("Directory created successfully\n");
	}else{
		printf("Unable to create directory %s\n",dirname);
	}
	return 0;
}
