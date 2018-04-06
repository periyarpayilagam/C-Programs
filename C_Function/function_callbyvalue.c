#include <stdio.h>  
#include <conio.h>  
void change(int num) {  
    printf("Before adding value inside function num=%d \n",num);  
    num=num+100;  
    printf("After adding value inside function num=%d \n", num);  
}  
  //A copy of value is passed to the function
  //Changes made inside the function is not reflected on other functions
  //
int main() {  
    int x=100;  
    printf("Before function call x=%d \n", x);  
    change(x);//passing value in function  
    printf("After function call x=%d \n", x);  
  
    getch();  
    return 0;  
}  