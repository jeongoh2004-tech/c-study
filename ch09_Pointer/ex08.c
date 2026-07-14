/*9장 포인터 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void swap(int *, int *);
int main(){
    int N;
    scanf("%d", &N);
    int x[50]={0};
    for(int *p=x; p<x+N; p++){
        scanf("%d", p);
    }
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&x[a], &x[b]);
    for(int *p=x; p<x+N; p++){
        printf("%d ", *p);
    }
    return 0;
}
void swap(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}