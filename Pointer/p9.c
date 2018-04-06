#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char st1[80], *stptr;
	puts("Enter String");
	gets(st1);
	stptr=(char *)malloc(strlen(st1));
	if(stptr==NULL)
	{
		printf("\n memory allocation error" );
		exit(0);
	}
	strcpy(stptr,st1);
	printf("Output String : %s", stptr);
	free(stptr);
		
	
}	
	
	// (casting_type) malloc(number of bytes required);