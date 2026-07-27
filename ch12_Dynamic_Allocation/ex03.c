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
    if(strchr(ch, '\n')!=NULL){
        ch[strcspn(ch,"\n")]='\0';
    }
    else{
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    char a, b;
    scanf("%c %c", &a, &b);
    int count_a=0, count_b=0;
    for(char *p=ch; p<ch+N; p++){
        if(*p==a)
            count_a++;
        if(*p==b)
            count_b++;
    }
    printf("%d %d", count_a, count_b);
    free(ch);
    return 0;
}