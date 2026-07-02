/*3장 입출력 실습 문제4*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    scanf ("%d %d %d", &num1, &num2, &num3);
    printf("purchase 1: %4d won\n", num1);
    printf("purchase 2: %4d won\n", num2);   
    printf("purchase 3: %4d won\n", num3);
    return 0;
}