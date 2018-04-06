#include<stdio.h>
#include<conio.h>
void main()
{  float avg, sum=0;
   int i;
   int marks[5];
   for(i=0; i<=4; i++)
   {
	   printf("\n Enter marks");
	   scanf("%d",&marks[i]);
   }
   for(i=0;i<=4;i++)
   
	   sum=sum+marks[i];
     avg =sum/5;
	 printf("\n Average marks=%f",avg);

}