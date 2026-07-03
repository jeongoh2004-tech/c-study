/*5장 조건문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if(ch>='A'&& ch<='Z'){
        ch=ch-'A'+'a';
        printf("%c", ch);
    }
    else if(ch>='a'&& ch<='z'){
        ch=ch-'a'+'A';
        printf("%c", ch);
    }
    else
        printf("none");
    return 0;
} 