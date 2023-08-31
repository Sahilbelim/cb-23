#include<stdio.h>
void main()
{
    int col,row,k;
    k = 5;

    for (row = 1; row <= 5;row++)
    {
        for (col = 1; col <= k; col++)
        {
            printf("* ");

        }
        printf("\n");
        k--; // k=k-1;
    }

}