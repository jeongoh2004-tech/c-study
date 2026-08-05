/*13장 고급 문법 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void ABC(int **p, int x, int y);
int main() {
    int N;
    scanf("%d", &N);
    int **arr=(int **)malloc(N*sizeof(int *));
    if(arr==NULL){
        printf("fail");
        return -1;
    }
    for(int i=0; i<N; i++){
        *(arr+i)=(int *)malloc(N*sizeof(int));
        if(*(arr+i)==NULL){
        printf("fail");
        return -1;
        }
    }
    ABC(arr, N, N);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf(" %d", *(*(arr+i)+j));
        }
        printf("\n");
    }
    for(int i=0; i<N; i++){
        free(*(arr+i));
    }
    free(arr);
	return 0;
}
void ABC(int **p, int x, int y){
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            *(*(p+i)+j)=i+j;
        }
    }
}
