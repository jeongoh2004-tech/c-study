/*4장 수식과 연산자 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    int result;
    result=(ch>='A' && ch<='Z')||(ch>='a' && ch<='z');
    printf("%d", result);
    return 0;
} 