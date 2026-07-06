/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char ch[7];
    for(int i=0; i<7; i++){
        scanf("%c", &ch[i]);
    }
    int count=0;
    for(int i=0; i<7; i++){
        if(ch[i]=='c'&&ch[i+1]=='a'&&ch[i+2]=='t')
            count++;
    }
    printf("%d", count);
    return 0;
} 