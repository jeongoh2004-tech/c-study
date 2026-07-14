/*9장 포인터 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add_to_k(int *, int *);
int main(){
    int N;
    scanf("%d", &N);
    int d[100]={0};
    int sum=0;
     for(int *p=d; p<d+N; p++){
        scanf("%d", p);
    }
    for(int *p=d; p<d+N; p++){
        sum+=add_to_k(d,p);
    }
    printf("%d", sum);
    return 0;
}
int add_to_k(int *a, int *b){
    int sum=0;
    for(int *p=a; p<=b; p++){
        sum+=*p;
    }
    return sum;
}

