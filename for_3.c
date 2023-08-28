
/*
1
22
333
4444
55555
*/

#include<stdio.h>
void main()
{
    int row, column,temp=1;
    for (row = 1; row <= 5;row++)
    {
        for (column = 1; column <= temp; column++)
        {
            printf("%d ",temp); //temp or row 
        }
        printf("\n");
        temp++;
   }


}