// write a program to print days of month .
#include<stdio.h>
void main()
{
    int month;

    printf("Enter month : ");
    scanf("%d", &month);

    printf("Given month is %d \n",month);

    if(month==1)
    {
        printf("Days of month is : 31");
    }
    else if(month==2)
    {
        printf("Days of month is : 28/29");
    }
    else if(month==3)
    {
        printf("Days of month is : 31 ");

    }
    else if (month==4)
    {
        printf("Days of month is : 30 ");

    }
    else if (month==5)
    {
        printf("Days of month is  : 31 ");
    }
    else if (month==6)
    {
        printf("Days of month is : 30 ");

    }
    else if (month==7)
    {
        printf("Days of month is : 31");

    }
    else if (month==8)
    {
        printf("Days of month is : 31 ");
    }
    else if (month==9)
    {
        printf("Days of month is : 30 ");
    }
    else if (month==10)
    {
        printf("Days of month is : 31 ");

    }
    else if(month==11)
    {
        printf("Days of month is : 30");
    }
    else if (month==12)
    {
        printf("Days of month is : 31 ");
    }
    else
    {
        printf("Invalide month ");
    }
  
}