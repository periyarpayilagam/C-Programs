#include <stdio.h>  
void func() {  
   static int i=0;//static variable  
   int j=0;//local variable  
   i++;  
   j++;  
   printf("i= %d and j= %d\n", i, j);  
}  
void main() {  
  func();  
  func();  
  func();  
}  