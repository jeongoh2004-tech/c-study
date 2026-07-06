/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int x[10];
    int sum=0;
    for(int i=0; i<5; i++){
        scanf("%d", &x[i]);
        sum+=x[i];
    }
    double avg = (double)sum/5;

    for(int i=0; i<5; i++){
        if(avg<x[i])
            printf("%d\n", x[i]);
    }
    return 0;
} 