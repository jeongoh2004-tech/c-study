/*3장 입출력 실습 문제5*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
   int year, month, date;
   scanf("%d/%d/%d", &year, &month, &date);
   printf("year %04d month %02d date %02d", year, month, date);
   return 0;
}