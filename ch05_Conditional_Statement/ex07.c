/*5장 조건문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);
    if(N==M)
        printf("RIGHT");
    else{
        if(N>M)
            printf("UP");
        else
            printf("DOWN");
        scanf("%d", &M);
        if(N==M)
            printf("RIGHT");
        else if(N>M)
            printf("UP");
        else
            printf("DOWN");
        }
    return 0;
} 