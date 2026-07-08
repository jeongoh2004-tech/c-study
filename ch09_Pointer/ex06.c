/*9장 포인터 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char ch[10];
    for(char *p=ch; p<ch+10; p++){
        scanf("%c", p);
    }
    int max=0;
    char max_ch;
    for(char *p=ch; p<ch+10; p++){
        int count=0;
        for(char *q=ch; q<ch+10; q++){
            if(*p==*q){
                count++;
            }
        }
        if(count>max){
            max=count;
            max_ch=*p;
        }
    }
    printf("%c %d", max_ch, max);
    return 0;
}