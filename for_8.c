/*
 1
 12
 123
 1234
 12345
 */
#include<stdio.h>
void main()
{
    int i, j,k;
    k = 1;

    for (i = 1; i <= 5;i++)
    {
        for (j = 1; j <= k; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        k++;
       }
}