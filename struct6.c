#include<stdio.h>
struct student
{
    char name[20];
    int age;
    float weight;
}s[5];

void main()
{
    int i;

    for (i = 0; i <= 4;i++)
    {
        printf("Enter Value of Name : ");
        scanf("%s", &s[i].name);
        printf("Enter Value of Age : ");
        scanf("%d", &s[i].age);
        printf("Enter Value of Weight : ");
        scanf("%f", &s[i].weight);
    }
    printf("\n________________________________________\n\n");
    for ( i = 0; i <=4; i++)
    {
        printf("Name    : %s \n\n", s[i].name);
        printf("Age     : %d \n\n", s[i].age);
        printf("Weight  : %f \n\n", s[i].weight);
    }
    
}