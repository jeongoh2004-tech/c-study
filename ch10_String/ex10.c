/*10장 문자열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main(){
    int N;
    scanf("%d", &N);
    getchar();
    char str[100][101];
    for(int i=0; i<N; i++){
        fgets(*(str+i), sizeof(*(str+i)), stdin);
        (*(str+i))[strcspn(*(str+i), "\n")]='\0';
    }
    int min=strlen(*(str));
    int min_pos=0;
    for(int i=1; i<N; i++){
        if(min>strlen(*(str+i))){
            min=strlen(*(str+i));
            min_pos=i;
        }
    }
    printf("%s", *(str+min_pos));
    return 0;
}
