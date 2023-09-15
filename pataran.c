#include <stdio.h>
void main()
{

    // int i,j;
    // for (i = 0; i <= 4;i++)
    // {
    //     for (j = 0; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // int i, j;
    // for (i = 0; i <= 4; i++)
    // {
    //     for (j = 0; j <= (4-i); j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {

            if (i == 5 || j == 1||i==j)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}