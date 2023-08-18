// check year is lipyear or note .
#include<stdio.h>
void main()
{
    int year,lip_year;
    printf("Enter year : ");
    scanf("%d", &year);

    printf("Entered year is  : %d \n", year);

    lip_year = year % 4;
    if(lip_year==0)
    {
        printf("Year is lip-year .");
    }
    else
    {
        printf("year is not a lip-year .");
    }
}