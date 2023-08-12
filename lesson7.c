#include<stdio.h>
void main()
{

    float pi, r, height, area;
    pi = 3.14159;
    r = 10;
    height  = 10;

    printf("Radius of cylinder is %.2f\n", r);
    printf("Height of cylinder is %.2f\n", height);

    area = (2 * pi * r * height) + (2 * pi*(r * r));
    
    printf("Area of cylinder is %.2f \n", area);
}