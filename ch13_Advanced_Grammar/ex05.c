/*13장 고급 문법 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void pswap(int **ppx, int **ppy);
int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	int *px=&x, *py=&y;
	pswap(&px, &py); // 포인터의 주소교환때문에 이중포인터 쓴거임
	printf("%d %d", *px, *py);
	return 0;
}
void pswap(int **ppx, int **ppy){
	int *tmp;
	tmp=*ppx;
	*ppx=*ppy;
	*ppy=tmp;
}

