#include<stdio.h>
int main()
{
 //Assignment Operators
int a,b,c;
  a=10;
  b=a;
 printf("%d \n",b);
 b=c=a; //multiple
 printf("%d \n",c);
 a=a+10; //Simple
 a+=10; //compound
 printf("%d \n",a);
 return 0;
}

Result:-
10
10
30
