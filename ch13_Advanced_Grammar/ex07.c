/*13장 고급 문법 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int add(int x, int y);
int main() {
    int A;
    scanf("%d", &A);
    void *p=&A;
    printf("%d\n", *(int *)p);
    int x, y;
    scanf("%d %d", &x, &y);
    int (*fp)(int, int);
    fp=add; // int (*fp)(int, int)=add랑 같음
    printf("%d", fp(x, y));
	return 0;
}
int add(int x, int y){
    int result=x+y;
    return result;
}

