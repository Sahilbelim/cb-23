#include <stdio.h>
void main()
{
    float Area[5], base[5], height[5];
    int i, k = 4;

    for (i = 0; i <= k; i++)
    {
        printf("\n\nEnter Value of Triangle %d \n", i + 1);
        printf("Enter Value of Base :");
        scanf("%f", &base[i]);
        printf("Enter Value of Height : ");
        scanf("%f", &height[i]);
    }
    printf("\n\n\n");
    for (i = 0; i <= k; i++)
    {
        printf("Triangle %d Base : %.2f  Height : %.2f \n", i + 1, base[i], height[i]);
    }
    printf("\n\n\n");

    for (i = 0; i <= k; i++)
    {
        Area[i] = (height[i] * base[i]) / 2;
        printf("Area of Triangle %d is %.2f \n", i + 1, Area[i]);
    }
}