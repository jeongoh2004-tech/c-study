/*7장 다차원 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int student[3][2]={0};
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &student[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<2; j++){
            sum+=student[i][j];
        }
        printf("%d\n", sum);
    }
    return 0;
}