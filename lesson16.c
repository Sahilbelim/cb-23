// BMI =WEIGHT /(HEIGHT*HEIGHT )
#include<stdio.h>
void main()
{
    float weight,height, bmi,f_to_m,i_to_m;

    int F_H, I_H;

    printf("Enter your Weight : ");

    scanf("%f", &weight);

    printf("Enter Height in Foot : ");

    scanf("%d", &F_H);

    printf("Eneter Height in Inch : ");

    scanf("%d", &I_H);

    printf("\nweight is %.2f \n", weight);

    printf("\nHeight in foot is %d \n", F_H);

    printf("\nHeight in inch is %d \n", I_H);

    f_to_m = F_H / 3.281;

    // printf("%f", f_to_m);

    i_to_m = I_H / 39.37;

    // printf("%.2f", i_to_m);

    height = f_to_m + i_to_m;
    printf("\nHeight is %.4f \n", height);

    bmi = weight / (height * height);

    printf("\n|||||||||||||||||||||||||| BMI = %.4f ||||||||||||||||||||||||||| \n", bmi);
}