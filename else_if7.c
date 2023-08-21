// write a program to fing larger area of two triangle .
#include<stdio.h>
void main()
{
    float area1, base1, height1, area2, base2, height2;

    printf("Enter  Base of triangle 1 :  ");
    scanf("%f", &base1);
    printf("Enter Height of Triangle 1 : ");
    scanf("%f", &height1);
    printf("Enter Base of Triangle 2 : ");
    scanf("%f", &base2);
    printf("Enter Heigth of Triangle 2 : ");
    scanf("%f", &height2);

    printf("Value of triangle 1 base : %.4f \n", base1);
    printf("Value of triangle 1 height : %.4f \n", height1);
    printf("Value of triangle 2 base : %.4f \n", base2);
    printf("Value of triangle 2 height : %.4f \n", height2);

    area1 = (base1 * height1) / 2;
    area2 = (base2 * height2) / 2;

    printf("Area of Triangle 1 is %.4f \n", area1);
    printf("Area of Triangle 2 is %.4f \n", area2);

    if(area1>area2)
    {
        printf("Triengle 1 is learge \n ");
    }
    else if(area2>area1)
    {
        printf("Triangle 2 is learge \n ");
    }   
    else
    {
        printf("Both are same ");
    }
}
