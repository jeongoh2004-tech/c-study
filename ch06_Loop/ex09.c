/*6장 반복문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int sum=0;
    for(int i=1; i<=N; i++){
        for(int j=i; j!=0; j/=10){
            if(j%10==3){
                sum++;
            }
        }
    }
    
    printf("%d", sum);
    return 0;
} 