// 1, 4, 9, 16 ... .10000
#include<stdio.h>
void main()
{
    int num,m;
    num = 1;
    m = 1;

while(num<=10000)
{
    printf("%d ,", num);

    m = m + 2;//3

    num = num + m;//4
}

    // printf("%d ,", num);

    // m = m + 2;//3

    // num = num + m;//4

    // printf("%d ,", num);

    // m = m + 2;//5

    // num = num + m;//9


    // printf("%d ,", num);

    // m = m + 2;//7

    // num = num + m;//16


    // printf("%d ,", num);

    // m = m + 2;//9

    // num = num + m;//25

    // printf("%d ,", num);

    // m = m + 2;//11

    // num = num + m;//36

    // printf("%d ,", num);

}