/*10장 문자열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main(){
    char str1[101], str2[101];
    fgets(str1, 101, stdin);
    str1[strcspn(str1, "\n")]='\0';
    fgets(str2, 101, stdin);
    str2[strcspn(str2, "\n")]='\0';
    int str1_len=0, str2_len=0;
    int i=0;
    while(str1[i]!='\0'){
        str1_len++;
        i++;
    }
    printf("%d", str1_len);
    i=0;
    while(str2[i]!='\0'){
        str2_len++;
        i++;
    }
    if(str1_len==str2_len){
        int flag=0;
        for(int j=0, k=0; j<str1_len; j++, k++){
            if(str1[j]!=str2[k]){
                flag++;
                break;
            }
        }
        if(flag==0)
            printf(" 1");
        else
            printf(" 0");
    }
    else
        printf(" 0");
    return 0;
}