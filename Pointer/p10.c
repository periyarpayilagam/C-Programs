#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
int i,*ptr;
ptr=(int *)calloc(5, sizeof(int));
if(ptr==NULL)
{printf("\n memory allocation error");
exit(0);
}
for(i=0;i<5;++i)
*(ptr+i)=i*10;
printf("\n output values \n");
for(i=0;i<5;++i)
printf("%d",*(ptr+i));
free(ptr);
}


// 
	// (casting_type) calloc(storage units, size);