#include <stdio.h>  
#include <conio.h>  
void change(int *num) {  
    printf("Before adding value inside function num=%d \n",*num);  
    (*num) += 100;  
    printf("After adding value inside function num=%d \n", *num);  
}  
// An address of value is passed to the function
//Changes made inside the function is reflected outside the function also

int main() {  
    int x=100;  
  
  
    printf("Before function call x=%d \n", x);  
    change(&x);//passing reference in function  
    printf("After function call x=%d \n", x);  
  
    getch();  
    return 0;  
}  