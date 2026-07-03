/*4장 수식과 연산자 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int big = N>M ? N : M;
    int small = N<M ? N :M;
    printf("%d\n", big/small);
    printf("%d\n", big%small);
    return 0;
} 