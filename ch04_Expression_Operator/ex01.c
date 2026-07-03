/*4장 수식과 연산자 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
   int num=0;
   scanf("%d", &num);
   int TTHO, THO, HUN, TEN, ONE;
   TTHO=num/10000;
   num%=10000;
   THO=num/1000;
   num%=1000;
   HUN=num/100;
   num%=100;
   TEN=num/10;
   num%=10;
   ONE=num;
   printf("%dTTHO %dTHO %dHUN %dTEN %d", TTHO, THO, HUN, TEN, ONE);
   return 0;
}