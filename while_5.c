// 0, 2, 4, 6, 8, ... 1000;
#include<stdio.h>
void main()
{
    int num = 0;

   while(num<=1000)
    {
        printf("%d ,", num);
        num = num + 2;
    }
}