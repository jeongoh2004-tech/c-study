/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
   int x[5];
   for(int i=0; i<5; i++){
    scanf("%d", &x[i]);
   }
   for(int i=0; i<5-1; i++){ //버블 정렬을 통한 정렬
    for(int j=0; j<5-1-i;j++){
        if(x[j]>x[j+1]){
            int tmp=x[j+1];
            x[j+1]=x[j];
            x[j]=tmp;
        }
    }
   }
   for(int i=0; i<5; i++){
    printf("%d\n", x[i]);
   }
    return 0;
}