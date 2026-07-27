/*12장 동적 할당 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int N;
    scanf("%d", &N);
    getchar();
    char **ch=(char **)malloc(N*sizeof(char*));
    if(ch==NULL){
        printf("fail");
        return -1;
    }
    char *tmp=(char *)malloc(101*sizeof(char));
    if(tmp==NULL){
        printf("fail");
        return -1;
    }
    for(int i=0; i<N; i++){
        fgets(tmp, 101, stdin);
        if(strchr(tmp, '\n')!=NULL){
            tmp[strcspn(tmp,"\n")]='\0';
        }
        else{
            int c;
            while((c=getchar())!='\n' && c!=EOF);
        }
        int len=strlen(tmp);    
        *(ch+i)=(char *)malloc((len+1)*sizeof(char));
        if(*(ch+i)==NULL){
            printf("fail");
            return -1;
        }
        strcpy(*(ch+i), tmp);
    }
    int min=strlen(*ch);
    strcpy(tmp, *ch);
    for(int i=1; i<N; i++){
        if(min>strlen(*(ch+i))){
            min=strlen(*(ch+i));
            strcpy(tmp, *(ch+i));
        }
    }
    printf("%s", tmp);
    free(tmp);
    for(int i=0; i<N; i++){
        free(*(ch+i));
    }
    free(ch);
    return 0;
}