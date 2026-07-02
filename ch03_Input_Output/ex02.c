/*3장 입출력 실습 문제2*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    int area=0;
    area = num1*num2;
    printf("area = %d\n", area);
    return 0;
}