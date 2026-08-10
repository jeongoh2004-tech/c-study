/*14장 파일처리 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> // 입출력관련 함수
#include<string.h> // 문자열 처림 함수
#include<stdlib.h> // malloc, free 등 일반 유틸리티 함수들
typedef struct{
    char name[10];
    int score;
}student;
int main(){
    student st[3];
    FILE *fp=fopen("ex05_1_student.dat", "rb");
    if(fp==NULL){
        printf("fail");
        return -1;
    }
    fread(st, sizeof(student), 3, fp);
    for(student *p=st; p<st+3; p++){
        printf("%s %d\n", p->name, p->score);
    }
    fclose(fp);
    return 0;
}
