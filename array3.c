#include<stdio.h>
void main()
{
    int num[5],i;

  
    
    // printf("Enter number 1 : ");
    // scanf("%d", &num[0]);
    // printf("Enter number 2 : ");
    // scanf("%d", &num[1]);
    // printf("Enter number 3 : ");
    // scanf("%d", &num[2]);
    // printf("Enter number 4 : ");
    // scanf("%d", &num[3]);
    // printf("Enter number 5 : ");
    // scanf("%d", &num[4]);

    for (i = 0; i <=4 ;i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d", &num[i]);
    }

    //     printf("Number 1  : %d ", num[0]);
    // printf("Number 2  : %d ", num[1]);
    // printf("Number 3  : %d ", num[2]);
    // printf("Number 4  : %d ", num[3]);
    // printf("Number 5  : %d ", num[4]);

    for (i = 0; i <= 4;i++)
    {
        printf("Number %d  : %d \n",i+1, num[i]);
    }
}