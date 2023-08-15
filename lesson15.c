#include<stdio.h>
void main()
{
    int number,f_n,s_n;
    printf("Enter Any two digit number : ");
    scanf("%d", &number);

    printf("Number is %d \n", number);//

    f_n = number / 10 ; //

    printf("First Number is %d \n", f_n);

    // s_n = number - (f_n*10);
    
    s_n = number % 10;

    printf("Second Number is %d ", s_n);

}