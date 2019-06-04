#include <stdio.h>

int main()
{
    int arr[]={20,10,30,50,40};
    int temp=arr[0];
    
    for(int i=1; i<5; i++)
    {
        if(temp>arr[i])
        {
            temp=arr[i];
        }
    }
    printf("Minimum value is: %d\n",temp);

    return 0;
}

Ans:-
Minimum value is: 10  

