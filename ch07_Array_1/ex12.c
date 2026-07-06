/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double x[10];
    for(int i=0; i<10; i++){
        scanf("%lf", &x[i]);
    }
    int count[10]={0};
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(x[i]>x[j])
                count[i]++;
        }
    }
    for(int i=0; i<10; i++){
        printf(" %d", count[i]);
    }
    return 0;
} 