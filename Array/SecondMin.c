#include <stdio.h>

int main()
{
    int arr[]={20,10,30,50,40};
    int first=arr[0];
    int sec=arr[0];
    
    for(int i=0; i<5; i++)
    {
        if(first>arr[i]) //20>10
        {
            sec=first; // 
            first=arr[i];
        }
        else if(first>arr[i])
        {
            sec=arr[i];
        }
    }
    printf("Second minimum value is: %d\n",sec);
   

    return 0;
}

Ans:-
Second minimum value is: 20 
