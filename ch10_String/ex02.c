/*10장 문자열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main(){
    int N;
    scanf("%d", &N);
    char ch[10]={0};
    int i=0;
    while(N){
        ch[i]=N%10+'0';
        i++;
        N/=10;
    }
    ch[i]='/0';
    printf("%s", ch);
    return 0;
}