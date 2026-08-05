/*13장 고급 문법 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int add(int x, int y);
int sub(int x, int y);
int multiply(int x, int y);
int main() {
    int (*handle[3])(int, int)={add, sub, multiply};
    int x, y;
    scanf("%d %d", &x, &y);
    for(int i=0; i<3; i++){
        printf("%d ", handle[i](x, y));
    }
	return 0;
}
int add(int x, int y){
    return x+y;
}
int sub(int x, int y){
    return x-y;
}
int multiply(int x, int y){
    return x*y;
}
