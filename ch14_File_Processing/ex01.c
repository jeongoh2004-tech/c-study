/*14장 파일처리 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> // 입출력관련 함수
#include<string.h> // 문자열 처림 함수
#include<stdlib.h> // malloc, free 등 일반 유틸리티 함수들
int main(){
    FILE *fp=fopen("ex01_data.txt", "w");
    int n, count=0, sum=0;
    double avg;
    while(!feof(stdin)){
        scanf("%d", &n);
        if(!feof(stdin)){
            fprintf(fp, "%d\n", n);
        }
    }
    fclose(fp);
    fp=fopen("ex01_data.txt", "r");
    while(!feof(fp)){
        if(fscanf(fp, "%d", &n)==1){
            count++;
            sum+=n;
        }
    }
    fclose(fp);
    avg=(double)sum/count;
    printf("%d\n", count);
    printf("%d\n", sum);
    printf("%.2lf", avg);
    return 0;
}
