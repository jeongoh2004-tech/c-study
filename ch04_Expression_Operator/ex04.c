/*4장 수식과 연산자 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
   int N;
   scanf("%d", &N);
   N+=500;
   N/=1000;
   N*=1000;
   printf("%d", N);
   return 0;
}