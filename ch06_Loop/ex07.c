/*6장 반복문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
   int N;
   scanf("%d", &N);
   int num=1;
   for(int i=0; i<N; i++){
        for(int j=0; j<i+1; j++){
            printf(" %d", num%10);
            num++;
        }
        printf("\n");
   }
    return 0;
} 