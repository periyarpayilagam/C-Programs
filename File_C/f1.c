#include<stdio.h>
void main()
{
FILE *fp;
fp=fopen("D:\\C\\test2.txt","wb");
fscanf(fp,"\n%s","");
printf("\n%s",fp);
fclose(fp);
}