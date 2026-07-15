/*10장 문자열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main(){
    char str1[41], str2[21];
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")]='\0';
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")]='\0';
    int N;
    scanf("%d",&N);
    for(int i=strlen(str1); i>=N; i--){
        str1[i+strlen(str2)]=str1[i];
    }
    for(int i=N, k=0; i<N+strlen(str2); i++, k++){
        str1[i]=str2[k];
    }
    printf("%s", str1);
    return 0;
}