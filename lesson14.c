#include<stdio.h>
void main()
{
    float area,lenth;

    printf("Enter Value of Lenth  : ");
    scanf("%f", &lenth);


    printf("\nValue of Height : %.4f\n\n", lenth);

    area = 6 * (lenth * lenth);
    printf("Area of cube  is %.4f ", area);
    
}