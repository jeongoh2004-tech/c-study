/*6장 반복문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for(int i=1; i<=6; i++){
        for(int j=1; j<=6; j++){
            for(int k=1; k<=6; k++){
                if(N==i+j+k)
                    printf("%d %d %d\n", i, j, k);
            }
        }
    }
    return 0;
} 