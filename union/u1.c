#include <stdio.h>
#include <string.h>
 
union student 
{           int a;
            char name[20];
            char subject[20];
            float percentage;
}record;
 
 
int main() 
{
            
            strcpy(record.name, "Raju");
            strcpy(record.subject, "Maths");
            record.percentage = 86.50;
            record.a=1000;
			printf(" value    : %d \n", record.a);
            printf(" Name       : %s \n", record.name);
            printf(" Subject    : %s \n", record.subject);
            //printf(" Percentage : %f \n", record.percentage);
            return 0;
			
}