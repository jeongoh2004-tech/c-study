/*9장 포인터 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void strcopy(char a[], char b[]);
int main(){
    char a[6]={0}, b[6]={0};
    char *pa=a;
    for(pa=a; pa<a+6; pa++){
        scanf("%c", pa);
    }
    char *pb=b;
    strcopy(a, b);
    for (pb = b; pb < b + 6; pb++) {
		printf("%c", *pb);
	}
    return 0;
}
void strcopy(char a[], char b[]){
    for(char *x=a, *y=b; x<a+6; x++, y++){
        *y=*x;
    }
}
