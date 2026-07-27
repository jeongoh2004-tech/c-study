/*12장 동적 할당 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int N;
    scanf("%d", &N);
    getchar();
    char *ch=(char *)malloc((N+1)*sizeof(char));
    if(ch==NULL){
        printf("fail");
        return -1;
    }
    fgets(ch, (N+1)*sizeof(char), stdin);
    if(strchr(ch, '\n')==NULL){
        ch[strcspn(ch, "\n")]='\0';
    }
    else if(strchr(ch, '\n')!=NULL){
        int c;
        while((c=getchar()!='\n') && c!=EOF);
    }
    int cnt=0;
    char *start=ch;
    while((start=strstr(start, "cat"))!=NULL){
        cnt++;
        start+=3;
    }
    printf("%d", cnt);
    free(ch);
    return 0;
}