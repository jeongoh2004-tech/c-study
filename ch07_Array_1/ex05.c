/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
   int X[10];
   for(int i=0; i<10; i++){
    scanf("%d", &X[i]);
   }
   int max_n=0;
   for(int i=0; i<10; i++){
    if(max_n<X[i])
        max_n=X[i];
   }
   printf("%d", max_n);
    return 0;
} 