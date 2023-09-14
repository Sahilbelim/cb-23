#include<stdio.h>
struct number 
{

    int x;
    float y;
};
void main()
{
    struct number n1, n2;

    // n1.x = 20;
    // n1.y = 45.36;
    // n2.x = 45;
    // n2.y = 78.45;

    printf("Enter Value of number x ");
    scanf("%d", &n1.x);
     printf("Enter Value of number y ");
    scanf("%f", &n1.y);
    printf("Enter Value of number x ");
    scanf("%d", &n2.x);
    printf("Enter Value of number y ");
    scanf("%f", &n2.y);
    printf("Value of number x is %d \n", n1.x);
    printf("Value of number y is %f \n", n1.y);
      printf("Value of number x is %d \n", n2.x);
    printf("Value of number y is %f \n", n2.y);
}