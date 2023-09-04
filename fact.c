// 5 ! = 5x4x3x2x1 = 120

#include<stdio.h>
void main()
{
    int number, temp,fact=1;

    printf("Enter number : ");
    scanf("%d", &number);

    for (temp = number; temp > 1;temp--)
    {
        // printf("%d", temp);
        fact = fact * temp;
    }
    printf("Factorial of %d! : %d", number, fact);
}