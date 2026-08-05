/*13장 고급 문법 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
double factorial(int n);
int main() {
    int n;
    scanf("%d", &n);
	double e = 1.0;
	for (int i = 1; i <= n; i++) {
	e += 1.0 / factorial(i);
	}
	printf("%.6f", e);
	return 0;
}
double factorial(int n) {
	if (n == 1) {
		return 1.0;
	}
	else {
		return n * factorial(n - 1);
	}
}
