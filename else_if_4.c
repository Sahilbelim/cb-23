// write a program to check year is miliniyear or not .
#include<stdio.h>
void main()
{
    int year,m_y;

    printf("Enter year : ");
    scanf("%d", &year);

    printf("Year is : %d \n", year);
    m_y = year % 1000;

    if(m_y==0)
    {
        printf("year is a miliniyear . ");
    }
    else
    {
        printf("year is not a miliniyear . ");

    }
}