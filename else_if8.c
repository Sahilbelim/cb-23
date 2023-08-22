/* Write a program to display zodiac symbol & given zodiac sign from given birth day and month as per following criteria.
https://in.pinterest.com/pin/81698180718875314/
*/
#include<stdio.h>
void main()
{
    int month, day;
    printf("Enter Month : ");
    scanf("%d", &month);
    printf("Enter Date : ");
    scanf("%d", &day);
    

    printf("Date is %d and month is %d \n\n", day, month);

    //(3 /21 - 31) (4/ 1-19 )

    if (month==3 && day>=21 && day<=31)
    {
        printf("Zodiac sign : aris \n symbol : the ram \n");
    }
    else if (month==4 && day>=1 && day<=19)
    {
        printf("Zodiac sign : aris \n symbol : the ram \n");
        
    }
    else if (month==4 && day>=20 && day<=30 )
    {
        printf("Zodiac sign : TAURUS \n symbol : the BULL \n");
    }
    else if(month==5 && day>=1 && day<=20)
    {
        printf("Zodiac sign : TAURUS \n symbol : the BULL \n");

    }
    else if (month==5 && day>=21 && day<=31)
    {
        printf("Zodiac sign : gemini \n symbol : the twins \n");
       
    }
    else if (month==6 && day>=1 && day<=20)
    {
        printf("Zodiac sign : gemini \n symbol : the twins \n");
    }
    else if (month==6 && day>=21 && day<=30)
    {
        printf("Zodiac sign : cancer \n symbol : the crab \n");
    }
    else if (month==7 && day >=1 && day<=22)
    {
        printf("Zodiac sign : cancer \n symbol : the crab \n");
    }
    else if (month==7 && day>=23 && day<=31)
    {
        printf("Zodiac sign : LEO \n symbol : the LION \n");
    }
    else if (month==8 && day>=1 && day<=22)
    {
        printf("Zodiac sign : LEO \n symbol : the LION \n");
    }
    else if(month==8 && day>=23 && day <=31 )
    {
        printf("Zodiac Sign : virgo    \n Symbol : The   virgin\n");
    }
    else if(month==9 && day>=1 && day <=22 )
    {
        printf("Zodiac Sign : virgo    \n Symbol : The   virgin\n");
    }
    else if(month==9 && day>=23 && day <=30 )
    {
        printf("Zodiac Sign : libra    \n Symbol : The   scales\n");
    }
    else if(month==10 && day>=1 && day <=22 )
    {
        printf("Zodiac Sign : libra    \n Symbol : The   scales\n");
    }
    else if(month==10 && day>=23 && day <=31 )
    {
        printf("Zodiac Sign : scorpio    \n Symbol : The  scorpion \n");
    }
    else if(month==11 && day>=1 && day <=21 )
    {
        printf("Zodiac Sign : scorpio    \n Symbol : The   scorpion\n");
    }
    else if(month==11 && day>=22 && day <=30 )
    {
        printf("Zodiac Sign :  sagittarius   \n Symbol : The  archer \n");
    }
    else if(month==12 && day>=1 && day <=22 )
    {
        printf("Zodiac Sign :  sagittarius   \n Symbol : The  archer \n");
    }
    else if(month==12 && day>=23 && day <=31 )
    {
        printf("Zodiac Sign : capricorn    \n Symbol : The goat  \n");
    }
    else if(month==1 && day>=1 && day <=19 )
    {
        printf("Zodiac Sign : capricorn    \n Symbol : The goat   \n");
    }
    else if(month==1 && day>=20 && day <=31 )
    {
        printf("Zodiac Sign :  aquarius   \n Symbol : The bearer  \n");
    }
    else if(month== 2 && day>=1 && day <=18 )
    {
        printf("Zodiac Sign :  aquarius   \n Symbol : The  water bearer \n");
    }
    else if(month==2 && day>=19 && day <=29 )
    {
        printf("Zodiac Sign :   pisces  \n Symbol : The fishes  \n");
    }     
    else if(month==3 && day>=1 && day <=20 )
    {
        printf("Zodiac Sign : pisces    \n Symbol : The fishes  \n");
    }        
    else
    {
        printf("Invalide input \n");
    }
    printf("Good bye...................\n\n");
}