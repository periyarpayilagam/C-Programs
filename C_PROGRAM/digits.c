#include <stdio.h>

int main()

{
   int n, sum = 0, rem; 

   printf("Please enter an integer\n");

   scanf("%d",&n);
   while(n != 0)

   {

      rem = n % 10;

      sum = sum + rem;

      n = n / 10;

   }

   printf("Sum of all individual digits of an entered number is %d\n",sum);

   return 0;

}