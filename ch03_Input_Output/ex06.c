/*3장 입출력 실습 문제6*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double num;
    scanf ("%lf", &num);
    printf("rounded up to %.0lf", num);
    return 0;
}