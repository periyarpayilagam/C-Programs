#include<stdio.h>

void main()
{
int a[5]={1,2,3,4,5},b,*pt;
pt=&a[0];
pt=pt+4;
b=a[0];
b+=4;
printf("\n %d",pt);
printf("\n %d",a[0]);
printf("\n %d",b);

}