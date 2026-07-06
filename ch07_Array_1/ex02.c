/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N, x[10];
    for(int i=0; i<10; i++){
        int N;
        scanf("%d", &N);
        x[i]=N;
    }
    int sum=0;
    for(int i=0; i<10; i++){
        sum+=x[i];
    }
    printf("%d", sum);
    return 0;
} 