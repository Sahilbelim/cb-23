#include<stdio.h>
void main()
{
    int number, count;

    printf("Enter Number : ");
    scanf("%d", &number);

    for (count = 1; count <= number;count++)
    {
        printf("%d ,", count);
   }
}