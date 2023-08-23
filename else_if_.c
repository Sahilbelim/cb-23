#include<stdio.h>
void main()
{
    int num1, num2;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);

    printf("Number 1 is %d and number 2 is %d \n", num1, num2);

    if(num1>num2)
    {
        printf("Number 1 is greter \n");
    }
    else if(num2>num1)
    {
        printf("number 2 is greter \n");
    }
    else 
    {
        printf("number 1 is equal to number 2 ");
    }
}