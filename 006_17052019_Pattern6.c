#include<stdio.h>
int main()
{
 /*
   ----1        
   ---12
   --123
   -1234
   12345     
   
   ----          
 */
  for(int i=1; i<=5; i++)
  {
	  for(int j=5; j>i; j--)
	  {
		  printf("-");
	  }
	  for(int k=1; k<=i; k++)  
	  {
		  printf("%d",k);
		  //1
		  //12
		  //123
	  }
	  printf("\n");
	  
  }	  
  
  return 0;
}



