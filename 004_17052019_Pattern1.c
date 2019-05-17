#include<stdio.h>
int main()
{
 /*
   1          i=1       i++      j=1   
   12                            j<=i
   123
   1234
   12345      i<=5               
 */
  
  

  for(int i=1; i<=5; i++)
  {
	  for(int j=1; j<=i; j++)
	  {
		  printf("%d", j);
	  }
	  printf("\n");
  }	  
  
  return 0;
}
