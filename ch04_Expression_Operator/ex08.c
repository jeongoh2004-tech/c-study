/*4장 수식과 연산자 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    N%=2;
    printf(N==0 ? "even":"odd");
    return 0;
} 