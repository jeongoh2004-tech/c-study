/*10장 문자열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main(){
    char str1[101], str2[101];
    scanf("%s", str1); scanf("%s", str2);
    if(strcmp(str1, str2)<0){ // str1이 str2보다 사전에서 먼저오면
        strcat(str2, str1);
        printf("%s", str2);
    }
    else{
        strcat(str1, str2);
        printf("%s", str1);
    }
    return 0;
}