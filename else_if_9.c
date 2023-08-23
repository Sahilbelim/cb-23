// write a program to findout largest cyliender's volume from 3 cyliender dimensions using nested decision making statement
#include <stdio.h>
void main()
{
    float volume1, volume2, volume3, r1, r2, r3, h1, h2, h3, pi;
    pi = 3.14159;

    printf("Eneter radius of cylinder 1 ");
    scanf("%f", &r1);
    printf("Eneter height of cylinder 1 ");
    scanf("%f", &h1);
    printf("Eneter radius of cylinder 2 ");
    scanf("%f", &r2);
    printf("Eneter height of cylinder 2 ");
    scanf("%f", &h2);
    printf("Eneter radius of cylinder 3 ");
    scanf("%f", &r3);
    printf("Eneter height of cylinder 3 ");
    scanf("%f", &h3);

    volume1 = pi * (r1 * r1) * h1;
    volume2 = pi * (r2 * r2) * h2;
    volume3 = pi * (r3 * r3) * h3;

    if(volume1>volume2 && volume1>volume3)
    {
        printf("Cylinder 1 is biger then 2 and 3 \n");
    }
    else if (volume2>volume1 && volume2>volume3)
    {
        printf("Clynder 2 is biger then 1 and 3 \n");
    }
    else if (volume3>volume1 && volume3>volume2)
    {
        printf("Cylinder 3 is biger then 1 and 2 \n");
    }
    else
    {
        printf("not sure.........\n");
    }
    
    
}