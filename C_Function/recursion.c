

/*call a function inside the same function,
 then it is called a recursive call of the function.*/
 
#include <stdio.h>

int factorial(unsigned int i) {

   if(i <= 1) {// 15<=1, 14<=1,..... when 1<=1 it returns 1 
      return 1;
   }
   return i * factorial(i - 1); 
}

int  main() {
   int i = 5;
   printf("Factorial of %d is %d\n", i, factorial(i));
   return 0;
}