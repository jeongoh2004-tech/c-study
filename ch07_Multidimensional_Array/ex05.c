/*7장 다차원 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arrsum(int x[],int, int);
int main(){
    int N, S, E;
    scanf("%d %d %d", &N, &S, &E);
    int x[100]={0};
    for(int i=0; i<N; i++){
        scanf("%d", &x[i]);
    }
    printf("%d", arrsum(x, S, E));
    return 0;
}
int arrsum(int x[],int S, int E){
    int sum=0;
    for(int i=S; i<=E; i++){
        sum+=x[i];
    }
    return sum;
}