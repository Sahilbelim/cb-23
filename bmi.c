/*
formula : https: // www.nursingcenter.com/getattachment/c5868853-d6da-4f97-81d3-8a2c50303d91/Body-Mass-Index-and-Body-Surface-Area-What-s-the-D.aspx

condition : https://www.cdc.gov/healthyweight/images/assessing/bmi-adult-fb-600x315.jpg?_=07167 
*/

#include<stdio.h>
void main()
{
    float weight,bmi,f_m,i_m,height;
    int foot, inch;
    printf("Enter Weight : ");
    scanf("%f", &weight);
    printf("Enter height in feet : ");
    scanf("%d", &foot);
    printf("Enter Height in inch : ");
    scanf("%d", &inch);
    f_m = foot / 3.28;
    i_m = inch / 39.37;
    height = f_m + i_m;

    printf("Weight is %.4f \n\n", weight);
    printf("Height is %.4f \n\n", height);

    bmi = weight / (height * height);

    printf("BMI is : %.4f\n\n", bmi);

    if(bmi>0 && bmi<18)
    {
        printf("You are underweight \n\n");
    }
    else if (bmi>=18 && bmi<25)
    {
        printf("you are normal \n\n");
    }
    else if (bmi>=25 && bmi<30)
    {
        printf("You are overweight\n\n");
    }
    else if (bmi>=30  && bmi<35)
    {
        printf("You are obese \n\n");
    }
    else if(bmi>=35)
    {
        printf("You are Extremly obese \n\n");
    }    
    else
    {
        printf("Invalide input ");
    }
    
}
