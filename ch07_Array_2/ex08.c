/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
   int x[5];
   for(int i=0; i<5; i++){
    scanf("%d", &x[i]);
   }
   for(int i=0; i<4; i++){
    if(x[i]>x[i+1]){
        int tmp=x[i];
        x[i]=x[i+1];
        x[i+1]=tmp;
    }
   }
   for(int i=0; i<5; i++){
    printf("%d\n", x[i]);
   }
    return 0;
}