/*12장 동적 할당 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    char **num;
    num=(char **)malloc(y*sizeof(char *));
    for(int i=0; i<y; i++){
        *(num+i)=(char *)malloc(x*sizeof(char));
    }
    char ch='a';
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            if(ch == 'z'+1){
                ch='A';
                *(*(num+i)+j)=ch;
                ch++;
            }
            else if(ch == 'Z'+1){
                ch='a';
                *(*(num+i)+j)=ch;
                ch++;
            }
            else{
                *(*(num+i)+j)=ch;
                ch++;
            }
        }
    }
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            printf("%c ", *(*(num+i)+j));
        }
        printf("\n");
    }
    for(int i=0; i<y; i++){
        free(*(num+i));
    }
    free(num);
    return 0;
}