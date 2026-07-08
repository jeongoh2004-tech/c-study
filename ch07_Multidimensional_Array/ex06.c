/*7장 다차원 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void prt(int x[][5], int N);
int main(){
    int N;
    scanf("%d", &N);
    int x[20][5]={0};
    for(int i=0; i<N; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &x[i][j]);
        }
    }
    prt(x, N);
    return 0;
}
void prt(int x[][5], int N){
    for(int i=N-1; i>=0; i--){
        for(int j=0; j<5; j++){
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}