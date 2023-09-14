#include<stdio.h>
struct number 
{

    int x;
    float y;
}n[2];
void main()
{
    // struct number n1, n2;

    // n1.x = 20;
    // n1.y = 45.36;
    // n2.x = 45;
    // n2.y = 78.45;

    printf("Enter Value of number x ");
    scanf("%d", &n[0].x);
     printf("Enter Value of number y ");
    scanf("%f", &n[0].y);
    printf("Enter Value of number x ");
    scanf("%d", &n[1].x);
    printf("Enter Value of number y ");
    scanf("%f", &n[1].y);
    printf("Value of number x is %d \n", n[0].x);
    printf("Value of number y is %f \n", n[0].y);
      printf("Value of number x is %d \n", n[1].x);
    printf("Value of number y is %f \n", n[1].y);
}