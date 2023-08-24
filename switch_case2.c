// write a program to check letter  vovel or not . using switch case.
#include <stdio.h>
void main()
{
    char letter;

    printf("Enter Value of Letter  ");
    scanf("%c", &letter);
    printf("Letter is %c \n", letter);

    switch (letter)
    {
    case 'a':
        printf("It's a vovel \n");
        break;
    case 'e':
        printf("It's a vovel \n");
        break;
    case 'i':
        printf("It's a vovel \n");
        break;
    case 'o':
        printf("It's a vovel \n");
        break;
    case 'u':
        printf("It's a vovel \n");
        break;
    case 'A':
        printf("It's a vovel \n");
        break;
    case 'E':
        printf("It's a vovel \n");
        break;
    case 'I':
        printf("It's a vovel \n");
        break;
    case 'O':
        printf("It's a vovel \n");
        break;
    case 'U':
        printf("It's a vovel \n");
        break;
    default:
        printf("It's not  a  vovel \n");
    }
}