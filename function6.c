#include<stdio.h>
int Add(int n1,int n2)
{
    int add;
    add = n1 + n2;
    return add;
}
int Sub(int i , int j)
{
    int sub;
    sub = i - j;
    return sub;
}
int Mul(int k ,int m)
{
    int mul;
    mul = k * m;
    return mul;
}
float Div(float m, float n)
{
    float div;
    div = m / n;
    return div;
}
int Sq(int num)
{
    int sq;
    sq = num * num;
    return sq;
}
int Qube(int num)
{
    int qube;
    qube = num * num * num;
    return qube;
}
void main()
{
    int number1, number2, ans;
    float div;

    printf("Enter number  1 ");
    scanf("%d", &number1);
     printf("Enter number  2 ");
    scanf("%d", &number2);
    printf("Value of number 1 %d and number 2 is %d \n", number1, number2);
    ans = Add(number1, number2);
    printf("Addition is %d \n", ans);
    ans = Sub(number1, number2);
    printf("Subtraction is %d \n", ans);
    ans = Mul(number1, number2);
    printf("Multiplication is %d \n", ans);
    div = Div(number1, number2);
    printf("Division is %f \n", div);
    ans = Sq(number1);
    printf("Squre of number 1 is %d \n", ans);
    ans = Qube(number2);
    printf("Qube of number 2 is %d \n", ans);
}