/*10장 문자열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main(){
    char str1[81]={0}, str2[11]={0};
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")]='\0';
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")]='\0';
    int flag=1;
    int len1=strlen(str1), len2=strlen(str2);
    printf("%d ", len1);
    for(int i=0; i<len1; i++){
        flag=1;
        for(int j=0; j<len2; j++){
           if(str1[i+j]!=str2[j]) {
                flag=0;
                break;
           }
        }
        if(flag==1)
            break;
    }
    printf("%d", flag);
    return 0;
}
