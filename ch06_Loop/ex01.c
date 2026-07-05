/*6장 반복문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    int i=1;
    scanf("%d", &N);
    while(i<=N){
        if(N%i==0)
            printf("%d ", i);
            i++;
    }
    return 0;
} 