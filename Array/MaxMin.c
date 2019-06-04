#include <stdio.h>

int main()
{
    int arr[]={20,10,30,50,40};
    int min=arr[0];
    int max=0;
    
    for(int i=1; i<5; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Maximum value is: %d\n",max);
    printf("Minimum value is: %d\n",min);

    return 0;
}

Ans:-

Maximum value is: 50                                                                                                           
Minimum value is: 10  
