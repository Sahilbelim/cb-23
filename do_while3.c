// 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000
#include<stdio.h>
void main()
{
    int num = 1,temp=1;
    do
   {

       printf("%d ,", num);
       temp = temp + 3;
       num = num + temp;
   } while (num <= 3000);
}