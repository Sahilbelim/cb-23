// write a program to print days of month .
#include<stdio.h>

void main()
{
    int month,year;
    printf("Enter month : ");
    scanf("%d", &month);

  
    printf("Given year is %d  \n", month);
    if(month==1 || month==3 ||month==5 || month == 7|| month==8|| month==10|| month==12 )
    {
        printf("Days of month is 31 \n");
    }
    else if (month==4 || month==6 || month==9 || month==11)
    {
        printf("Days of month is 30 \n");
        
    }
    else if (month==2)
    {

        printf("Days of month is 28/29 \n");
        
    }
    else
    {
        printf("Invalide month ");
    }
    

    
}