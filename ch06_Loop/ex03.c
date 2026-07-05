/*6장 반복문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int predict_N;
    int i=0;
    do{
        scanf("%d", &predict_N);
        if(predict_N>N)
            printf("%d>?\n", predict_N);
        else if(predict_N<N)
            printf("%d<?\n", predict_N);
        else
            printf("%d==?\n", predict_N);
        i++;
    } while (N!=predict_N);
    printf("%d\n", i);
    return 0;
} 