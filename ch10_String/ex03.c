/*10장 문자열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main(){
    char str[101];
    fgets(str, sizeof(str), stdin);
    int len=strlen(str);
    while(len-1){
        printf("%s", str);
        int i=0;
        while(str[i+1]!='\n'){
            char tmp=str[i];
            str[i]=str[i+1];
            str[i+1]=tmp;
            i++;
        }
        len--;
    }
    return 0;
}