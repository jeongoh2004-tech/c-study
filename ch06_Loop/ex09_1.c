/*6장 반복문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int sum=0;
    while(N!=0){
        if(N%10==3){
            sum++;
            N/=10;
        }
        else
            N/=10;
    }
    printf("%d", sum);
    return 0;
} 