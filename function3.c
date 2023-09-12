#include<stdio.h>
void BMI(int f,int i,float w)
{
    float height, bmi;
    printf("Height : %d.%d\n\n", f, i);
    printf("Weight : %.4f\n", w);

    // f_m = f_h / 3.281;
    // i_m = i_h / 39.37;
    height = (f / 3.281) + (i / 39.37);

    bmi = w / (height * height);
    printf("\n\nBmi  = %.4f\n\n", bmi);
}
void main()
{
    int f_h[5], i_h[5],i;
    float weight[5], f_m, i_m, height, bmi;

    for (i = 0; i <= 4;i++)
    {
        
        printf("Enter Value of Weight  : ");
    scanf("%f", &weight[i]);
    printf("Enter Height in foot : ");
    scanf("%d", &f_h[i]);
    printf("Enter Height in inch : ");
    scanf("%d", &i_h[i]);

    }

    BMI(f_h[0],i_h[0],weight[0]);

    BMI(f_h[1],i_h[1],weight[1]);


    BMI(f_h[2],i_h[2],weight[2]);


    BMI(f_h[3],i_h[3],weight[3]);
    

    BMI(f_h[4],i_h[4],weight[4]);
}