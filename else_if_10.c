// write a program to check get month and year and check date.
#include <stdio.h>
void main()
{
    int month, year, lip_y;
    printf("Enter month : ");
    scanf("%d", &month);
    printf("Enter year : ");
    scanf("%d", &year);
    lip_y = year % 4;
    printf("Given month is %d  \n", month);
    printf("Given year is %d  \n", year);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("Days of month is 31 \n");
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("Days of month is 30 \n");
    }
    else if (month == 2)
    {
        if (lip_y == 0)
        {

            printf("Days of month is 29 \n");
        }
        else
        {

            printf("Days of month is 28 \n");
        }
    }
    else
    {
        printf("Invalide month ");
    }
}