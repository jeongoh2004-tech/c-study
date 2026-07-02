/*3장 입출력 실습 문제1*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    unsigned int num = 0;
    scanf("%x", &num);
    printf("decimal number = %u\n", num);
    printf("octal number = %o\n", num);
    return 0;
}