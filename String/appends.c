//Appends portion of one string at the end of another string. 
 
#include <stdio.h>
#include <string.h>
 
int main( )
{
   char source[ ] = "Payilagam" ;
   char target[ ]= "C tutorial" ;
 
   printf ( "\nSource string = %s", source ) ;
   printf ( "\nTarget string = %s", target ) ;
 
   strncat ( target, source, 5 ) ;
 
   printf ( "\nTarget string after strncat( ) = %s", target ) ;
}