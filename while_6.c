// 1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 10000
#include<stdio.h>
void main()
{
    int num = 1,temp=1;
while(num<1000)
    {
        printf("%d ,", num);

        temp = temp + 4;

        num = num + temp;
    }


}
    // printf("%d ,", num);

    // temp = temp + 4;//5

    // num = num + temp;

    // printf("%d ,", num);

    // temp = temp + 4;//9

    // num = num + temp;

    // printf("%d ,", num);

    // temp = temp + 4;//13

    // num = num + temp;

    // printf("%d ,", num);

    // temp = temp + 4;//17

    // num = num + temp;

    // printf("%d ,", num);

    // temp = temp + 4;//21

    // num = num + temp;

    // printf("%d ,", num);

    // temp = temp + 4;//25

    // num = num + temp;

    // printf("%d ,", num);
