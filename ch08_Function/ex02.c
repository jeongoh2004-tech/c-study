/*8장 함수 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum(int);

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    int result=0;
    result=sum(B)-sum(A-1);
    printf("%d", result);
    return 0;
}

int sum(int x){
    return x*(x+1)/2;
}