/*13장 고급 문법 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int dec(int n);
int main() {
    int n;
    scanf("%d", &n);
	printf("%d", dec(n));
	return 0;
}
int dec(int n){
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else{
		return dec(n-1)+dec(n-2);
	}
}
