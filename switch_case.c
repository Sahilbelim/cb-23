#include <stdio.h>
void main()
{
    int number, f_num, s_num;
    printf("Enter Value of Number ");
    scanf("%d", &number);

    printf("Number : %d\n", number);
    f_num = number / 10;
    s_num = number % 10;

    printf("first number : %d \n second number : %d \n", f_num, s_num);
    printf("First : ");
    switch (f_num)
    {
    case 1:
        printf(" one ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;
    case 0:
        printf("Zero");
        break;
    default:
        printf("invalide");
    }
    // second number condition
    printf("   second : ");
    switch (s_num)
    {
    case 1:
        printf(" one ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;
    case 0:
        printf("Zero");
        break;
    default:
        printf("invalide");
    }
    
}