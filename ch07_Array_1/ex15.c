/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char ch[10];
    for(int i=0; i<10; i++){
        scanf("%c", &ch[i]);
    }
    for(int i=0; i<10; i++){
        int flag=0;
        for(int j=0; j<10; j++){
            if(ch[i]==ch[j] && i!=j){
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf(" %c", ch[i]);
    }
    return 0;
} 