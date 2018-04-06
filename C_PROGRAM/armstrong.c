 #include <stdio.h>

int main()

{
   int n, sum = 0, t, remainder;

   printf("\nPlease enter a number to find whether it is an armstrong or not");

   scanf("%d",&n);

    t = n;

   while( t != 0 )

   {  remainder = t%10;

      sum = sum + remainder*remainder*remainder;

      t = t/10;
   }

   if ( n == sum )

      printf("\nThe number %d is an armstrong number", n);

   else

      printf("\nThe number %d is not an armstrong number", n);

   return 0;

}



/*
ex: 153,

      153>0
	  remainder=153%10; --> 3
	  
	  sum = 0+3*3*3; --> 27;
	   
	  t=153/10; --> 15;
	  
	  ---------------------------------
	  
	  again 
	  
	   15>0
	    in this case, 
		remainder=15%10; --> 5;
		 
		 sum= 27+5*5*5;  --> 152;
		 t= 15/10; -->1;
		 
	-------------------------------------
		 
		 again,
		 
		 1>0;
		 
		 remainder=1%10; --> 1;
		 
		 sum= 152+1*1*1;
		 t=1/10; loop terminated here;
		 
		 
		n=153, sum=153;
		
		hence, given number is armstrong.
		
		
		*/
		 
	  