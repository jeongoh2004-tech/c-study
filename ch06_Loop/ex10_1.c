/*6장 반복문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int sum=0;
    for(int i=N; i!=0; i/=10){
        sum+=i%10;
    }
    printf("%d", sum);
    return 0;
} 