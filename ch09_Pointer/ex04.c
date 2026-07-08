/*9장 포인터 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int x[3];
    for(int *p=x; p<x+3; p++){
        scanf("%d", p);
    }   
    for(int *p=x; p<x+3-1; p++){
        for(int *q=x; q<x+3-1-(p-x); q++){
            if(*q>*(q+1)){
                int temp =*q;
                *q=*(q+1);
                *(q+1)=temp;
            }
        }
    }
    printf("%d", *(x+1));
    return 0;
}

