/*5장 조건문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if(N<0)
        printf("cold, indoor");
    else if(N>=0 && N<40)
        printf("moderate, outdoor");
    else if(N>=40)
        printf("hot, indoor");
    return 0;
} 