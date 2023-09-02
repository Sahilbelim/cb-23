#include<stdio.h>
void main()
{
    int number,count=1;
    printf("Enter number ");
    scanf("%d", &number);
    
    do
    {
        printf("%d ,", count);
        count++;
    } while (count <= number);
}