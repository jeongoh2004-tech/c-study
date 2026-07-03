/*5장 조건문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c;
    int big, small;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c)
        big=a;
    else if (b>a && b>c)
        big=b;
    else
        big=c;
    if(a<b && a<c)
        small=a;
    else if (b<a && b<c)
        small=b;
    else
        small=c;
    printf("%d %d", big, small);
    return 0;
} 