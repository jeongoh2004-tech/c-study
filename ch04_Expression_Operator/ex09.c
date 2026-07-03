/*4장 수식과 연산자 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int result = N>M ? N : M;
    printf("%d", result);
    return 0;
} 