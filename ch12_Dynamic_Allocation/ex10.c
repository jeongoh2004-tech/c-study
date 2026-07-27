/*12장 동적 할당 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int N;
    scanf("%d", &N);
    int M=N-1;
    int *num_N=(int *)malloc(N*sizeof(int));
    if(num_N==NULL){
        printf("fail");
        return -1;
    }
    int *num_M=(int *)malloc(M*sizeof(int));
    if(num_M==NULL){
        printf("fail");
        return -1;
    }
    int num=0;
    for(int *p=num_N; p<num_N+N; p++){
        *p=num++;
    }
    int flag=N/2;
    int *q=num_N;
    for(int *p=num_M; p<num_M+M; p++){
        if(p==num_M+flag){
            q++;
        }
        *p=*q;
        q++;
    }
    for(int *p=num_M; p<num_M+M; p++){
        printf(" %d", *p);
    }
    free(num_M);
    free(num_N);
    return 0;
}