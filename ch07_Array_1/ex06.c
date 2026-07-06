/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int X[10], Y[10];
    for(int i=0; i<10; i++){
        scanf("%d", &X[i]);
    }
    for(int i=0; i<10; i++){
        int count=0;
        for(int j=0; j<10; j++){
            if(X[i]<X[j])
                count++;
        }
        Y[i]=count;
    }
    for(int i=0; i<10; i++){
        printf(" %d", Y[i]);
    }
    return 0;
} 