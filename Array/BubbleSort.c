#include<stdio.h>
int main()
{
  int arr[] ={2,4,3,1,5,7,6};
  int temp=0;
  for(int i=0; i<7; i++)
  {
	  for(int j=i+1; j<7; j++)
	  {
		  if(arr[i]>arr[j])
		  {
			 temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;		 
		  }
	  
	  }
  }
  
  for(int k=0; k<7; k++)
  {
	  printf(" %d ", arr[k]);
  }
  
  return 0;
  
}


