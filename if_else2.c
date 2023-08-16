#include<stdio.h>
void main()
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);

    printf("Number is %d \n", number);

    if(number>0)
    {
        printf("number is positive \n");
    }
    else
    {
        printf("number is nagetive \n");
    }
    printf("Good bye ..............");
}