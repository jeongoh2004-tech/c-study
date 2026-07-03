/*4장 수식과 연산자 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
   double N, pi=3.14 ,r, area;
   scanf("%lf", &N);
   r= N/(2*pi);
   area= r*r*pi;
   printf("%.0lf", area);
   return 0;
} 