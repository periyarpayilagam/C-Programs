#include<stdio.h>
int main()
{
  int a=20, b=10;
  // For If else
  if(a>b)
  {
    printf("A>B \n");
  }
  else
  {
	  printf("False \n");
  }
  
  //For nested if 
  
  if(a>b)
  {
    printf("A>B \n");
  }
  if(a>=b)
  {
    printf("A>=B \n");
  }
  if(a!=b)
  {
    printf("A!=B \n");
  }
  if(a==b)
  {
    printf("A==B \n");
  }
  
  //For nested else if
  
  if(a<b)
  {
    printf("A<B \n");
  }
  else if(a>=b)
  {
    printf("A>=B \n");
  }
  else if(a!=b)
  {
    printf("A!=B \n");
  }
  else if(a==b)
  {
    printf("A==B \n");
  }
  else
  {
	 printf("Bye...\n");
  }
  
  //For switch case
  
  char x='b';
  
  switch(x)
  {
	  case 'c':
	  printf("I am C \n");
	  break;
	  
	  case 'b':
	  printf("I am B \n");
	  goto label;
	 
	  
	  case 'a':
	  label:
	  printf("I am A \n");
	  break;
	  
	  default:
	  printf("Nothing... \n");
	  break;
	  
  }
  
  //For Loop(repeated activities)


  for(int i=1; i<=5; i++)
  {
	  printf("For loop printing Page: %d \n", i);
  }	  
  
  // while loop
  
  int i=0;
  while(i<=5)
  {
	  printf("While loop printing Page: %d \n", i);
	  i++;
  }
  
  // Do while 
  
  int j=0;
  do
  {
	  printf("Do while printing Page: %d \n", j);
	  j++;
  }
  while(j<0);
  
   
  return 0;
}

/*


D:\C\ctut>cond
A>B
A>B
A>=B
A!=B
A>=B
I am B
I am A
For loop printing Page: 1
For loop printing Page: 2
For loop printing Page: 3
For loop printing Page: 4
For loop printing Page: 5
While loop printing Page: 0
While loop printing Page: 1
While loop printing Page: 2
While loop printing Page: 3
While loop printing Page: 4
While loop printing Page: 5
Do while printing Page: 0


*/
