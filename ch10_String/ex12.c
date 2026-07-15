/*10장 문자열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main(){
    char str1[101]={0}, str2[101]={0};
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")]='\0';
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")]='\0';
    int count=0;
    int len1=strlen(str1), len2=strlen(str2);
    for(int i=0; i<len1; i++){
        int flag=1;
        for(int j=0; j<len2; j++){
           if(str1[i+j]!=str2[j]) {
                flag=0;
                break;
           }
        }
        if(flag==1){
            count++;
            i=i+len2-1;
        }
    }
    printf("%d", count);
    return 0;
}
