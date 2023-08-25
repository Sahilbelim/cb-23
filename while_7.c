// 1 , 4, 9 , 16 ....10000
#include<stdio.h>
void main()
{
    int num = 0,sq;
    while(sq<10000)
   {
       num = num + 1;
       sq = num * num;
       printf("%d  ,", sq);
   }
    // num = num + 1;
    // sq = num * num;
    // printf("%d  ,",sq);
    // num = num + 1;
    // sq = num * num;
    // printf("%d  ,",sq);
}