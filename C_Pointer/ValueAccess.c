#include<stdio.h>
int main()
{
 int m=20;
 int *p;
 
 p=&m;
 
 printf("Address of m is:%x \n", &m);
 printf("Address of pointer variable p is:%x \n", *p);
 // after stored
 printf("Address of pointer variable p is:%x \n", p);
 
 printf("value of m is: %d \n", *p);

}