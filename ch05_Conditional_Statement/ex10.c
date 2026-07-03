/*5장 조건문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double avg= (a+b+c)/3;
    if(avg>=91.5)
        printf("A");
    else if(avg>=85.5)
        printf("B");
    else
        printf("C");
    if(a==100 || b==100 || c==100)
        printf("Good");
    if(a<60 || b<60 || c<60)
        printf("BAD");
    return 0;
} 