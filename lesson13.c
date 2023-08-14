#include<stdio.h>
void main()
{
    float area, height, base;

    printf("Enter Value of Height : ");
    scanf("%f", &height);
    printf("Enter Value of Base : ");
    scanf("%f", &base);

    printf("\nValue of Height : %.4f\n\n", height);
    printf("Value of Base : %.4f\n\n", base);

    area = (height * base) / 2;
    printf("Area of Triangle is %.4f ", area);
    
}