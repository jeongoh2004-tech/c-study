/*9장 포인터 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arrsum(int *, int *);
int main(){
    int N, S, E;
    scanf("%d %d %d", &N, &S, &E);
    int x[100]={0};
    for(int *px=x; px<x+N; px++){
        scanf("%d", px);
    }
    int sum=arrsum(x+S, x+E);
    printf("%d", sum);
    return 0;
}
int arrsum(int *ps, int *pe){
    int sum=0;
    for(int *p=ps; p<=pe; p++){
        sum+=*p;
    }
    return sum;
}

