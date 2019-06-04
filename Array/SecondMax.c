#include <stdio.h>

int main()
{
    int arr[]={20,10,30,50,40};
    int first=0;
    int sec=0;
    
    for(int i=0; i<5; i++)
    {
        if(arr[i]>first)  //20>0, 10>20, 30>20, 50>30, 40>50
        {
            sec=first;//0, 20 , 30
            first=arr[i];//20,30, 50
        }
        else if(arr[i]<first)// 40<50
        {
            sec=arr[i];
        }
    }
    printf("Second maximum value is: %d\n",sec);
   

    return 0;
}


Ans:-
Second maximum value is: 40
