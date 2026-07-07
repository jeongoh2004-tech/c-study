/*7장 다차원 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int x[3][3]={0};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &x[i][j]);
        }
    }
    int sum=0;
    for(int i=0; i<3; i++){
        sum+=x[i][i];
    }
    printf("%d", sum);
    return 0;
}