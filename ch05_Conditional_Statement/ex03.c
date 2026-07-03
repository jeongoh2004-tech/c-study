/*5장 조건문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int sum=0;
    if(a>0)
        sum+=a;
    if(b>0)
        sum+=b;
    if(c>0)
        sum+=c;
    if(d>0)
        sum+=d;
    if(e>0)
        sum+=e;
    printf("%d", sum);
    return 0;
} 