#include<stdio.h>
void main()
{
 int a, *b;
 a=100;
 b=&a;
 printf("\n The address of a is %u",b);
 printf("\n The content of a is %d",*b);
}





/*
&--- direction operator or address of operator
*---- indirection operator or content of operator
x=x+ *a; the content of "a" is addred to "x"

y = *a * *b ; the content of a and b is multiplied and stored into y.

z= *a + x; the content of a is added to x and stored in z.

*/


