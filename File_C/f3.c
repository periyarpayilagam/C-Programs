#include<stdio.h>
int main()
{
FILE *fp;
char c;
fp = fopen("D:\\C\\test1.txt","r");
if(fp==NULL)
printf("file does not exist\n");
else
{
while(c != EOF)
{
c=getc(fp);
putchar(c);
}
fclose(fp);
}
return 0;
}