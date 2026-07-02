/*3장 입출력 실습 문제3*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double num1=0, num2=0;
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    double area=0;
    area = num1*num2;
    printf("area = %.2lf\n", area);
    return 0;
}