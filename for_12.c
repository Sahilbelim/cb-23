#include<stdio.h>
void main()
{
    int i, j;

    for (i = 1; i <= 5;i++)
    {
        for (j = 1; j <= i;j++)
        {
          if(i==5 || j==1 || i==j)
          {
              printf("%d ",j);
          }
          else
          {
              printf("  ");
          }
        }
        printf("\n");
    }
}