/*10장 문자열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int check(char *str);
int main(){
    char str[31];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]='\0';
    int len=strlen(str);
    printf("%d ", len);
    printf("%d", check(str));
    return 0;
}
int check(char *str){
    int len=strlen(str);
    int flag=1;
    for(int i=0, j=len-1; i<len; i++, j--){
        if(str[i]!=str[j]){
            flag=0;
            break;
        }
    }
    return flag;
}
