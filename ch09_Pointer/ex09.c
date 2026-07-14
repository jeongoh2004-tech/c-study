/*9장 포인터 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void gcdlcm(int a, int b, int *pmin, int*pmax);
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int min, max;
	int* pmin = &min, * pmax = &max;
	gcdlcm(a, b, pmin, pmax);
	printf("%d %d", min, max);
	return 0;
}
void gcdlcm(int a, int b, int* pmin, int* pmax) {
	int x = a * b;
	if (a >= b) {
		while (b!=0) {
			int tmp = b;
			b = a % b;
			a = tmp;
		}
		*pmin = a;
	}
	else {
		while (a != 0) {
			int tmp = a;
			a = b % a;
			b = tmp;
		}
		*pmin = b;
	}
	*pmax = x / (*pmin);
}