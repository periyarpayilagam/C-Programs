#include<stdio.h>
void main()
{
  int a,b;
   void swap(int*, int*);
   printf("Enter two numbers:");
   scanf("%d%d", &a,&b);
   printf("\n the values before swap a=%d b=%d \n",a,b);
   swap(&a,&b);
   printf("\n the values after swap a=%d b=%d \n",a,b);
   
}

void swap(int *x, int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
  printf("the value inside the swap a=%d b=%d",*x,*y);
}