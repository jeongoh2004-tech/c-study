/*6장 반복문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(j==i || j==N-1-i)
                printf(" X");
            else
                printf(" O");
        }
        printf("\n");
    }
    return 0;
} 