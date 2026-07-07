/*8장 함수 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int, int);

int main()
{
    int N;
    scanf("%d", &N);
    int sum=0;
    for(int i=1; i<=N; i++){
        sum=add(sum, i);
    }
    printf("%d", sum);
    return 0;
}

int add(int x, int y){
    int sum=x+y;
    return sum;
}