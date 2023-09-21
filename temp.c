#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    char number[10];
}s[10];
void getdata(int i)
{
    for (i = 0; i < 10; i++)
    {
        printf("Enter roll no :");
        scanf("%d", &s[i].roll_no);
        printf("Enter name  :");
        scanf("%s", &s[i].name);
        printf("Enter number :");
        scanf("%s", &s[i].number);
    }
}
void printdata(int i)
{
    for (i = 0; i < 10; i++)
    {
        printf("\n\nEnter roll no : %d \n\n", s[i].roll_no);

        printf("\n\nEnter roll no :%s \n\n", s[i].name);

        printf("\n\nEnter roll no :%s \n\n", s[i].number);
    }
}
void main()
{
    
    
   
    
}