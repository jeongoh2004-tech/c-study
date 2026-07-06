/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double x[10];
    for(int i=0; i<10; i++){
        scanf("%lf", &x[i]);
    }
    double min_num=x[0];
    for(int i=0; i<10; i++){
        if(min_num>x[i])
            min_num=x[i];
    }
    printf("%.1lf", min_num);
    return 0;
} 