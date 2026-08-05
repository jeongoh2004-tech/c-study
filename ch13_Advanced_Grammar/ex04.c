/*13장 고급 문법 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	unsigned int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	unsigned int result=0;
	a=(a<<24);
	result=result | a;
	b=(b<<16);
	result=result | b;
	c=(c<<8);
	result=result | c;
	result=result | d;
	printf("%u", result);
	return 0;
}
