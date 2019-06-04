#include <stdio.h>

int main()
{
    int arr[]={20,10,30,50,40};
    int temp=0;
    
    for(int i=0; i<5; i++)
    {
        if(arr[i]>temp)
        {
            temp=arr[i];
        }
    }
    printf("Maximum value is: %d\n",temp);

    return 0;
}


Ans:-

Maximum value is: 50 
