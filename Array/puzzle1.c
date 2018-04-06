#include<stdio.h>
void main()
{
    int a[5] = {5, 1, 15, 20, 25};
    int i, j, m;
    i = ++a[1];
    j = a[1]++;
    m = a[i++];
    printf("%d, %d, %d", i, j, m);
}

/*
a[0] = 5, a[1] = 1, a[2] = 15, a[3] = 20, a[4] = 25.

>> int i, j, m; The variable i, j, m are declared as an integer type.

>> i = ++a[1]; becomes i = ++1; Hence i = 2 and a[1] = 2

>> j = a[1]++; becomes j = 2++; Hence j = 2 and a[1] = 3.

>> m = a[i++]; becomes 
m = a[2]; Hence m = 15 and i is incremented by 1(i++ means 2++ so i=3)




*/