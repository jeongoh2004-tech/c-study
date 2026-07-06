/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int X[10], N, i;
    scanf("%d", &N);
    for(i=0; N/10!=0; N=N/10){
        X[i]=N%10;
        i++;
    }
    X[i]=N;
    for(int j=0; j<=i;j++){
        printf(" %d", X[j]);
    }
    return 0;
} 