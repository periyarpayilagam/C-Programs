#include <stdio.h>

int main()

{

    int  a[25];

    int  i, j, num, m, t, key, pos;

 

    printf("Please enter number of elements\n");

    scanf("%d", &num);

 

    printf("Enter the elements one by one\n");

    for(i=0; i<num; i++)

    {

         scanf("%d", &a[i]);

    }

 

    printf("Input array elements:\n");

    for(i=0; i<num; i++)

    {

         printf("%d\n", a[i]);

    }

 

    for(i=0; i< num; i++)

    {

         for(j=i+1; j<num; j++)

         {

               if (a[i] > a[j])

               {

                      t = a[i];

                      a[i] = a[j];
                      a[j] = t;
					  
					  /*1). i=0, 0<3, and j=1, 1<3, hence a[0]>a[1] --> 5>3 true
			       t=5; a[0]=3, a[1]=5;
				  
				   2). i=1, 1<3, and j=2, 2<3, so a[1]>a[2] ---> 5>8 wrong
				   3). i=2, 2<3, and j=3, 3<3 wrong 
				   4). i=3, 3<3 wrong so, whole loop operation is terminated.
				   Now, array elements are a[0]=3, a[1]=5, a[2]=8.	*/		   
				   			   

               }

         }

    }

 

    printf("Sorted array elements (list):\n");

    for(i=0; i<num; i++)

    {

         printf("%d\n", a[i]);// 3,5,8

    }

 

    printf("Enter the element to be inserted\n");

    scanf("%d",&key);// key=2;

 

  for(i=0; i<num; i++)

    {

         if ( key < a[i] )
                                     // 2<3
        {

               pos = i;   // pos=0;

               break;

        }  

    }

 

    m = num - pos + 1 ; 

 

    for(i=0; i<= m ; i++)

    {
 
           a[num-i+2] = a[num-i+1] ;
    }

    a[pos] = key;

    printf("Array elements (list) after inserting:\n");

    for(i=0; i<num+1; i++)

    {

          printf("%d\n", a[i]);

    }

}