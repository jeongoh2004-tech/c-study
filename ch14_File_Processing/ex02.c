/*14장 파일처리 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> // 입출력관련 함수
#include<string.h> // 문자열 처림 함수
#include<stdlib.h> // malloc, free 등 일반 유틸리티 함수들
int main(){
    FILE *fp1=fopen("ex02_test1.txt", "r");
    if(fp1==NULL){
        printf("fail");
        return -1;
    }
    FILE *fp2=fopen("ex02_test2.txt", "w");
    if(fp2==NULL){
        printf("fail");
        return -1;
    }
    char ch[10];
    fgets(ch, 10, fp1);
    for(int i=0; i<9; i++){
        if(*(ch+i)>='a'&&*(ch+i)<='z'){
            *(ch+i)=*(ch+i)-'a'+'A';
        }
        else{
            *(ch+i)=*(ch+i)-'A'+'a';
        }
    }
    fputs(ch, fp2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}
