/*step 1:  *

 step2:  *****

 step:3

       ***** 1
       *****2
       *****3
       *****4
       *****5
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

        while (j <= i)
        {
            printf("*");
            j++; // j=j+1;
        }

        printf("\n");
        temp++;
        i++;
    }
}