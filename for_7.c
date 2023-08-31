/*
_* * * * *
__* * * *
___* * *
____* *
_____*
*/
/*

    _*
    _____*****

    _____*****
    _____*****
    _____*****
    _____*****
    _____*****

*/
#include<stdio.h>
void main()
{
    int col_1,col_2,row,k,temp;
    k = 5;
    temp = 1;
    for (row = 1; row <= 5;row++)
    {
        for (col_1 = 1; col_1 <= temp; col_1++) // increamennt variable (TEMP)
        {
            printf(" ");
        }

        for (col_2 = 1; col_2 <= k; col_2++) // decreament variable (k)
        {
            printf("* ");
        }
        printf("\n");
        k--;
        temp++;
    }


    // for (col_1 = 1; col_1 <= 5;col_1++)
    // {
    // printf("_");
    // }
    // for (col_2 = 1; col_2 <= 5;col_2++)
    // {
    // printf("*");
    // }
    //  printf("\n");

    //  for (col_1 = 1; col_1 <= 5;col_1++)
    //  {
    // printf("_");
    //  }
    //  for (col_2 = 1; col_2 <= 5;col_2++)
    //  {
    // printf("*");
    //  }
    //  printf("\n");

    //  for (col_1 = 1; col_1 <= 5; col_1++)
    //  {
    // printf("_");
    //  }
    //  for (col_2 = 1; col_2 <= 5; col_2++)
    //  {
    // printf("*");
    //  }
    //  printf("\n");
    //  for (col_1 = 1; col_1 <= 5; col_1++)
    //  {
    // printf("_");
    //  }
    //  for (col_2 = 1; col_2 <= 5; col_2++)
    //  {
    // printf("*");
    //  }
    //  printf("\n");
}