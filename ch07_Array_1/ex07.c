/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int X[10];
    for(int i=0; i<10; i++){
        scanf("%d", &X[i]);
    }
    for(int i=0; i<10; i++){
        int flag=0;
        for(int j=0; j<i; j++){
            if(X[i]==X[j]){
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf(" %d", X[i]);
    }
    return 0;
} 