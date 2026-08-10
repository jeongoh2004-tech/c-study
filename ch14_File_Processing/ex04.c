/*14장 파일처리 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> // 입출력관련 함수
#include<string.h> // 문자열 처림 함수
#include<stdlib.h> // malloc, free 등 일반 유틸리티 함수들
int main(){
    char file1[21], file2[21];
    scanf("%s", file1); scanf("%s", file2);
    FILE *fp1=fopen(file1, "a");
    if(fp1==NULL){
        printf("fail");
        return -1;
    }
    FILE *fp2=fopen(file2, "r");
    if(fp2==NULL){
        printf("fail");
        return -1;
    }
    int ch=fgetc(fp2);
    while(!feof(fp2)){
        fputc(ch, fp1);
        ch=fgetc(fp2);
    }
    return 0;
}
