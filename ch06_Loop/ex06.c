/*6장 반복문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int num, i=0, j=0;
    while(i<N){
        num=i+1;
        for (j=1; j<=N; j++){
            printf(" %d", num%10);
            num++;
        }
        printf("\n");
        i++;
    }
    return 0;
} 