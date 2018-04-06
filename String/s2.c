#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int g;
	char name[30];
	//clrscr();
	printf("\n Enter your name:");
	gets(name);
	g=strlen(name);
	printf("your name length is: %d", g);
	printf("\n upper name: %s", strupr(name));
	printf("\n lower name: %s \n", strlwr(name));
	puts(name);
	getch();
}
