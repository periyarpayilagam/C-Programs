#include <stdio.h>    
#include <conio.h>    
int minarray(int arr[],int size){  
int min=arr[0];  
int i=0;  
for(i=1;i<size;i++){  
if(min>arr[i]){  
min=arr[i];  
}  
}  
return min;  
}  
  
void main(){    
int i=0,min=0;  
int numbers[]={4,3,7,2,8,9};  
   
  
min=minarray(numbers,6); 
printf("minimum number is %d \n",min);  
  
getch();    
}    