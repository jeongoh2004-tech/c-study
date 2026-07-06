/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
   int x[5], rank[5];
   for(int i=0; i<5; i++){
    scanf("%d", &x[i]);
    rank[i]=1;
   }
   for(int i=0; i<5; i++){ // 정렬하지 않고 비교만으로 등수 계산
    for(int j=0; j<5; j++){
        if(x[i]<x[j]){
            rank[i]++;
        }
    }
   }
   for(int i=0; i<5; i++){
    printf("%d=r%d ", x[i], rank[i]);
   }
    return 0;
}