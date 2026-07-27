/*12장 동적 할당 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int N;
    scanf("%d", &N);
    int *num=(int *)malloc(N*sizeof(int));
    for(int *p=num; p<num+N; p++){
        scanf("%d", p);
    }
    for(int *p=num; p<num+N-1; p++){
        if(*p>*(p+1)){
            int tmp=*p;
            *p=*(p+1);
            *(p+1)=tmp;
        }
    }
     for(int *p=num; p<num+N; p++){
        printf("%d\n", *p);
    }
    free(num);
    return 0;
}