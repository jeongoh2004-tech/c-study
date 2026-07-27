/*12장 동적 할당 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int N;
    scanf("%d", &N);
    int *p=(int *)malloc(N*sizeof(int));
    if(p==NULL){
        printf("fail");
        return -1;
    }
    for(int i=0; i<N; i++){
        scanf("%d", p+i);
    }
    int sum=0;
    for(int *q=p; q<p+N; q++){
        sum+=*q;
    }
    printf("%d", sum);
    free(p);
    return 0;
}