#include <stdio.h>
#include <string.h>
int main( )
{
   char str1[ ] = "Payilagam" ;
   char str2[ ] = "Payilagam" ;
   int i, j, k ;
   i = strcmp ( str1, "lagam" ) ;
   j = strcmp ( str1, str2 ) ;
   k = strcmp ( str1, "l" ) ;
   printf ( "\n%d %d %d", i, j, k ) ;
   return 0;
}

/* strcmp( ) function in C compares two given 
strings and returns zero if they are same.

If length of string1 < string2, it returns < 0 value. 
If length of string1 > string2, it returns > 0 value.

"A" and "a" both are different


*/


