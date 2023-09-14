#include <stdio.h>

struct Name
{
    char name[20];
} n[5];

void main()
{
    int i;

    for (i = 0; i <= 4; i++)
    {
        printf("Enter name of user %d ",i + 1);
        scanf("%s", &n[i].name);
    }
    for (i = 0; i <= 4; i++)
    {
        printf("Name of user %d is %s \n", i + 1, n[i].name);
    }
}