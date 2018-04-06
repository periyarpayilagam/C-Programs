#include <stdio.h>
#include <string.h>
int main( )
{
   char str1[ ] = "payilgam" ;
   char str2[ ] = "lagam" ;
   int i, j, k ;
   i = strcmpi ( str1, "lagam" ) ;
   j = strcmpi ( str1, str2 ) ;
   k = strcmpi ( str1, "f" ) ;
   printf ( "\n%d %d %d", i, j, k ) ;
   return 0;
}


/*

If length of string1 < string2, it returns < 0 value.
If length of string1 > string2, it returns > 0 value.
*/