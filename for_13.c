//  10= 1+2+3+4+5+6+7+8+9+10 = 55

#include<stdio.h>
void main()
{
    int number, count,sum=0;

  

    printf("Enter number ");
    scanf("%d", &number);

    for (count = 1; count <= number;count++)
    {  
        // printf("%d +", count);
        sum = sum + count; 
    }
    printf(" Sum of 1 to  %d : %d",number, sum);
}