// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 ....300.


#include<stdio.h>
void main()
{
    int number1,number2;
    number1 = 1;
    number2 = 2;


    printf("%d ,", number2);

    printf("%d ,", number1);

    while(number1<199)
    {
        number2 = number1 + number2; // 3

        printf("%d ,", number2);

        number1 = number1 + number2; // 4

        printf("%d ,", number1);
    }

    // number2 = number1 + number2;//3

    // printf("%d ,", number2);

    // number1 = number1 + number2;//4
            
    // printf("%d ,", number1);

    // number2 = number1 + number2;//7

    // printf("%d ,", number2);

    // number1 = number1 + number2;

    // printf("%d ,", number1);//11

    // number2 = number1 + number2;

    // printf("%d ,", number2);//18



}