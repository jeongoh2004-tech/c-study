/*6장 반복문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    int sum=0;
    scanf("%d", &N);
    while(N!=0){
        sum+=N;
        scanf("%d", &N);
    }
    printf("%d", sum);
    return 0;
} 