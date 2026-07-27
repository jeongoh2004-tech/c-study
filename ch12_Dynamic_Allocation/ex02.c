/*12장 동적 할당 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int N;
    scanf("%d", &N);
    float *p=(float *)malloc(N*sizeof(float));
    for(int i=0; i<N; i++){
        scanf("%f", (p+i));
    }
     float max=*p, *pmax=p;
    for(int i=1; i<N; i++){
        if(max<*(p+i)){
            max=*(p+i);
            pmax=p+i;
        }
    }
    printf("%.2f", *pmax);
    free(p);
    return 0;
}