/*5장 조건문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if(N%2==0 && N%3==0 && N%5==0)
        printf("A");
    else if(N%2==0 && N%3==0)
        printf("B");
    else if(N%2==0 && N%5==0)
        printf("C");
    else if(N%3==0 && N%5==0)
        printf("D");
    else if(N%2==0 || N%3==0 || N%5==0)
        printf("E");
    else
        printf("N");
    return 0;
} 