/*9장 포인터 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char ch[20]={0};
    char *pch=ch;
    for(int i=0; i<20; i++){
        scanf("%c", pch+i);
        if(*(pch+i)=='\n')
            break;
    }
    int flag=0;
    for(int i=0; i<20; i++){
        if(*(pch+i)=='#'){
            flag=i;
            break;
        }
    }
    for(int i=flag-1; i>=0; i--){
        printf("%c", *(pch+i));
    }
    return 0;
}

