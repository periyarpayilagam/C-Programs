#include<stdio.h>
int main()
{
int a,*p;
a = 10;
p = &a;   

printf("%d\n",*p);    //this will print the value of a. 

printf("%d\n",*&a);  //this will also print the value of a.

printf("%u\n",&a);  //this will print the address of a.

printf("%u\n",p);  //this will also print the address of a.

printf("%u\n",&p);  //this will also print the address of p.

return 0;

}
/*
		The % Format Specifiers

		The % specifiers that you can use in ANSI C are:

		Usual variable type Display

		%c char single character

		%d (%i) int signed integer

		%e (%E) float or double exponential format

		%f float or double signed decimal

		%g (%G) float or double use %f or %e as required

		%o int unsigned octal value

		%p pointer address stored in pointer

		%s array of char sequence of characters

		%u int unsigned decimal

		%x (%X) int unsigned hex value


*/