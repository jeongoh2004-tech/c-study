/*10장 문자열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main(){
    char ch[21];
    gets(ch);
    for(char *p=ch; *p!='\0'; p++){
        if(*p>='a' && *p<='z'){
            printf("%c", *p);
        }
    }
    return 0;
}