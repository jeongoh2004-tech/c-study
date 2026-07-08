/*9장 포인터 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int ar[5]={0};
    for(int *p=ar; p<ar+5; p++){
        scanf("%d", p);
    }
    int rank[5]={1};
    for(int *p=ar; p<ar+5; p++){
        int rank=1;
        for(int *q=ar; q<ar+5; q++){
            if(*p<*q){
                rank++;
            }
        }
        printf("%d=r%d ", *p, rank);
    }
    return 0;
}

