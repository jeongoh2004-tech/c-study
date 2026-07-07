/*8장 함수 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum(int);

int main()
{
    int N;
    scanf("%d", &N);
    int result=0;
    for(int i=1; i<=N; i++){
        result=result+sum(i);
    }
    printf("%d", result);
    return 0;
}

int sum(int x){
    return x*(x+1)/2;
}