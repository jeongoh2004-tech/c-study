/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int x[10];
    for(int i=0; i<N; i++){
        scanf("%d", &x[i]);
    }
    int M=0;
    for(int i=0; i<N; i++){
        M=M*10+x[i];
    }
    printf("%d", M);
    return 0;
} 