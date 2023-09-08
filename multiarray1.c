#include<stdio.h>
void main()
{
    int num[2][2];

    // num[0][0] = 10;
    // num[0][1] = 20;
    // num[1][0] = 30;
    // num[1][1] = 45;

    // printf("Number 1 %d ", num[0][0]);
    // printf("Number 2 %d ", num[0][1]);
    // printf("Number 3 %d ", num[1][0]);
    // printf("Number 4 %d ", num[1][1]);

    printf("Enter number ");
    scanf("%d", &num[0][0]);
    printf("Enter number ");
    scanf("%d",&num[0][1]);
    printf("Enter number ");
    scanf("%d", &num[1][0]);
    printf("Enter number ");
    scanf("%d", &num[1][1]);

    printf("Number 1 %d ", num[0][0]);
    printf("Number 2 %d ", num[0][1]);
    printf("Number 3 %d ", num[1][0]);
    printf("Number 4 %d ", num[1][1]);
}