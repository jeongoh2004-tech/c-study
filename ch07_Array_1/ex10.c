/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double x[10];
    for(int i=0; i<10; i++){
        scanf("%lf", &x[i]);
    }
    for(int i=0; i<10; i++){
        if(x[i]>0)
            printf(" %.1lf", x[i]);
    }
    return 0;
} 