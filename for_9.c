#include<stdio.h>
void main()
{
    int number,row,col;
    printf("Enter Number : ");
    scanf("%d",&number);


    for (row = 1; row <= number;row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
        }
}