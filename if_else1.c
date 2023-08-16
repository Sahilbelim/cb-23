#include<stdio.h>
void main()
{
    int num1, num2;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);
    printf("\n\nNumber 1 is %d and Number 2 is %d \n", num1, num2);


    if(num1>num2 )
    {
        printf("number 1 is greter then number 2 \n");
    }
    else
    {
        printf("Number 2 is greter then number 1 \n");
    }

    printf("Good bye.................");
}