#include<stdio.h>
int main()
{
 /*
   1          i=1       i++      j=1      print(i)
   22                            j<=i
   333
   4444
   55555      i<=5               
 */
  for(int i=1; i<=5; i++)
  {
	  for(int j=1; j<=i; j++)
	  {
		  printf("%d", i);
	  }
	  printf("\n");
  }	  
  
  return 0;
}

