#include<stdio.h>

float getpi()
{
    float pi;
    pi = 3.141592;

    return pi;
}
void main()
{
    float pi, r, h, area;
    pi = getpi();
    // printf("%f", pi);

    printf("Enter Value of Radius : ");
    scanf("%f", &r);

    printf("Enter Value of Height : ");
    scanf("%f", &h);

    printf("Height : %f \n\n Radius  : %f \n", h, r);

    area = (2 * pi * r * h )+( 2 * pi * (r * r));

    printf("Area of cylinder : %.2f ", area);
}