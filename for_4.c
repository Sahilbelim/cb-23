#include<stdio.h>
void main()
{
    int col,row,k;
    k = 1;

    for (row = 1; row <= 5;row++)
    {
        // printf("%d", row);
        for (col = 1; col <=row ; col++)
        {
            printf("* ");
        }
        printf("\n");
       
        k++;
   }
   /*
   for (col = 1; col <= 5; col++)
       {
           printf("*");
       }
       printf("\n");
       for (col = 1; col <= 5; col++)
       {
           printf("*");
       }
       printf("\n");
       for (col = 1; col <= 5; col++)
       {
           printf("*");
       }
       printf("\n");
       for (col = 1; col <= 5; col++)
       {
           printf("*");
       }
       printf("\n");
       for (col = 1; col <= 5; col++)
       {
           printf("*");
       }
       printf("\n");

   */
}