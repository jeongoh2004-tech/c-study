/*6장 반복문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=N; i<=M; i++){
        int sum=1;
        printf("%d!=1", i);
        for(int j=2; j<=i;j++){
            sum *=j;
            printf("*%d", j);
        }
        printf("=%d\n", sum);
    }
    return 0;
} 