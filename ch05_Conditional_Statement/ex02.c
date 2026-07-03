/*5장 조건문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    if(N*N==M)
        printf("%d*%d=%d", N, N, M);
    else if(M*M==N)
        printf("%d*%d=%d", M, M, N);
    else
        printf("none");
    return 0;
}