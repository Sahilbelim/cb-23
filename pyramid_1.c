/*step 1:  *

 step2:  *****

 step:3

       *****
       *****
       *****
       *****
       *****
 step:4

       *
       **
       ***
       ****
       *****
   */

#include<stdio.h>
void main()
{
    int i,j,temp;
    temp = 1;
    i = 1;
    while(i<=5)
    {
        j = 1;
        while (j <= temp)
        {
            printf("* ");
            j++; // j=j+1;
        }

        printf("\n");
        i++;
        temp++;
    }
 
    // j = 1;

    // while(j<=5)
    // {
    //    printf("*");
    //    j++;
    // }

    // printf("\n");

    // j = 1;

    // while(j<=5)
    // {
    //    printf("*");
    //    j++;
    // }
    // printf("\n");

    // j = 1;
    // while(j<=5)
    // {
    //    printf("*");
    //    j++;
    // }
    // printf("\n");

    // j = 1;
    // while (j <= 5)
    // {
    //    printf("*");
    //    j++;
    // }
    // printf("\n");
}