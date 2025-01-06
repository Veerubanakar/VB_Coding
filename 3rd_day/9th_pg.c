/*C program to check a specified file has read, write, and execute permission or not*/

#include<stdio.h>
#include<unistd.h>

int main()
{
	int ret = 0;

	ret = access("veeru.txt", R_OK);
	if(ret != -1)
	{
		printf("has read access");
	}else{
		printf("not have read access");
	}
	ret = access("veeru.txt",W_OK);
	if(ret != -1)
	{
		printf("\nhas write access");
	}else{
		printf("\nnot have write access");
	}
	ret = access("veeru.txt",X_OK);
	if(ret != -1)
	{
		printf("\nhas execute access");
	}else{
		printf("not have access");
	}
	printf("\n");
}
