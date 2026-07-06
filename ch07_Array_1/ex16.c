/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    getchar();
    char x[10];
    for(int i=0; i<N; i++){
        scanf("%c", &x[i]);
    }
    int num[10];
    for(int i=0; i<N; i++){
        scanf("%d", &num[i]);
    }
    int result;
    for(int i=0; i<N; i++){
        result=num[i]%N;
        printf("x[%d%%%d]=x[%d]=%c\n", num[i], N, result, x[result]);
    }
    return 0;
} 