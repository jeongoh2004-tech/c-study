/*9장 포인터 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void input(int *, int *, int *);
void output(int *, int *, int *);
int main(){
    int x, y, z;
    input(&x, &y,&z);
    output(&x, &y, &z);
    return 0;
}
void input(int *x, int *y, int *z){
    scanf("%d %d %d", x, y, z);
}
void output(int *x, int *y, int *z){
    printf("%d %d %d", *x, *y, *z);
}