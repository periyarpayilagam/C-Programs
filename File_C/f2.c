#include<stdio.h>
void main()
{
FILE *fp;
fp=fopen("D:\\C\\test1.txt","wb");
fprintf(fp,"%s","this is my frist fh class");
fclose(fp);
}