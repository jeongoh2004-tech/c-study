/*9장 포인터 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void addArray(int *, int *, int *, int);
int main(){
    int N;
    scanf("%d", &N);
    int x[20]={0}, y[20]={0}, z[20]={0};
    for(int *px=x; px<x+N; px++){
        scanf("%d", px);
    }
    for(int *py=y; py<y+N; py++){
        scanf("%d", py);
    }
    addArray(x, y, z, N);
    for(int *pz=z; pz<z+N; pz++){
        printf(" %d", *pz);
    }
    return 0;
}
void addArray(int *a, int *b, int *c, int N){
    for(int *pa=a, *pb=b+N-1, *pc=c; pa<a+N; pa++, pb--, pc++){
        *pc=*pa+*pb;
    }
}

