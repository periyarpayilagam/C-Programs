#include<stdio.h>
int main()
{
   int a=20;
   int b=10;
   printf("--- Arithmetic Operators ----\n");
   printf("a+b is: %d \n",(a+b));
   printf("a-b is: %d \n",(a-b));
   printf("a/b is: %d \n",(a/b));
   printf("a*b is: %d \n",(a*b));
   printf("a%b is: %d \n",(a%b));
   
   printf("--- Relational Operators ----\n");
   printf("a>b is: %d \n",(a>b));
   printf("a<b is: %d \n",(a<b));
   printf("a==b is: %d \n",(a==b));
   printf("a!=b is: %d \n",(a!=b));
   printf("a<=b is: %d \n",(a<=b));
   printf("a>=b is: %d \n",(a>=b));
   
   printf("--- Logical Operators ----\n");
   printf("AND is: %d  \n",(a>b && a<b));
   printf("OR  is: %d  \n",(a<b || a<=b));
   printf("NOT is: %d  \n",(a!=b));
  
   //a=20
   printf("--- Increment or Decrement Operators ----\n");
   printf("Post increment is: %d  \n",(a++));//20
   printf("Pre increment  is: %d  \n",(++a));//21,22
   printf("Post decrement  is: %d  \n",(a--));//22
   printf("Pre increment  is: %d  \n",(--a));//21, 20
   
   printf("--- Ternary or Conditional Operators ---\n");
   int m= a>b?100:200;
   printf("Conditional value is :%d",m);
   
   printf("--- Assignment Operators ----\n");
   a+=10;
   b-=5;
   printf("a+b is: %d \n",(a+b));
   printf("a-b is: %d \n",(a-b));
   printf("a/b is: %d \n",(a/b));
   printf("a*b is: %d \n",(a*b));
   printf("a%b is: %d \n",(a%b));
   
   printf("--- Left Shift and Right Shift ----\n");
   printf("Left shift is: %d  \n",(10<<2));
   printf("Right shift is: %d  \n",(10>>2));
   
   
   return 0;
}
/*
Result:-
--- Arithmetic Operators ----
a+b is: 30
a-b is: 10
a/b is: 2
a*b is: 200
ab is: 0
--- Relational Operators ----
a>b is: 1
a<b is: 0
a==b is: 0
a!=b is: 1
a<=b is: 0
a>=b is: 1
--- Logical Operators ----
AND is: 0
OR  is: 0
NOT is: 1
--- Increment or Decrement Operators ----
Post increment is: 20
Pre increment  is: 22
Post decrement  is: 22
Pre increment  is: 20
--- Ternary or Conditional Operators ---
Conditional value is :100--- Assignment Operators ----
a+b is: 35
a-b is: 25
a/b is: 6
a*b is: 150
ab is: 0
--- Left Shift and Right Shift ----
Left shift is: 40
Right shift is: 2

*/

