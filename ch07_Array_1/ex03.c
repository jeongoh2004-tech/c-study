/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
   int X[10], Y[10], Z[10];
   for(int i=0; i<10 ; i++){
    scanf("%d", &X[i]);
   }
    for(int i=0; i<10 ; i++){
    scanf("%d", &Y[i]);
   }
   for(int i=0; i<10; i++){
    Z[i]=X[i]+Y[i];
   }
   for(int i=0; i<10; i++){
    printf(" %d", Z[i]);
   }
    return 0;
} 