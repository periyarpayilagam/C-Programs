#include <stdio.h>

int main()

{

     int c, n, first, last, mid, search, a[250];

     printf("Please enter number of elements\n");

     scanf("%d",&n);   // n=4;

 

     printf("Enter the elements one by one\n", n);

 

     for ( c = 0 ; c < n ; c++ )

     {

          scanf("%d",&a[c]); // a[0]=3, a[1]=5; a[2]=2;

     }

 

     printf("Enter the element to be searched\n");

     scanf("%d",&search); // search=5;

 

     first = 0;

     last = n - 1;  // 4-1=3;

     mid = (first+last)/2; //mid= 3+2/2=2;
     while( first <= last )// 3<=2  // or  2,3,5  2<=5, 

     {
           if ( a[mid] < search )      // a[2]=5<5

          {
               first = mid + 1;    
          }

          else if ( a[mid] == search ) 

         {
               printf("%d is found at the location %d.\n", search, mid+1);

               break;

         }

         else

         {
              last = mid - 1;   // last=2-1;

         }

          mid = (first + last)/2; // mid= 3+1/2=2;

     }

     if ( first > last )

         printf("Element %d is not found in the list\n", search);
     return 0;   

}