#include<stdio.h>
void main()
{
    int number1, number2,add,sub,mul,mod;
    float divison;

    printf("\n\nEnter Value of number 1 ");
    scanf("%d", &number1);
    printf("Enter value of number 2 ");
    scanf("%d", &number2);

    printf("Value of number 1 is %d and number 2 is %d \n\n", number1, number2);

    add = number1 + number2;

    printf("Addition is %d \n\n", add);

    sub = number1 - number2;

    printf("Subtraction is %d \n\n", sub);

    mul = number1 * number2;
    
    printf("Multiplication is %d \n\n", mul);

    divison = number1 / number2;

    printf("Division is %.2f \n\n", divison);

    mod = number1 % number2;

    printf("Moduls is %d ", mod);
}