/*5장 조건문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &d, &e, &f);
    int S=0, B=0;
    if(a==d)
        S+=1;
        if(a==e)
            B+=1;
        if(a==f)
            B+=1;
    if(b==e)
        S+=1;
        if(b==d)
            B+=1;
        if(b==f)
            B+=1;
    if(c==f)
        S+=1;
        if(c==d)
            B+=1;
        if(c==e)
            B+=1;
    printf("%dS%dB", S, B);
    return 0;
} 