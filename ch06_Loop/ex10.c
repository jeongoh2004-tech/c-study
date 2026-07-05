/*6장 반복문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int sum=0;
    int i=N;
    while(i/10!=0){
        sum=0;
        while(i/10!=0){
            sum+=i%10;
            i/=10;
        }
        sum+=i;
        i=sum;
    }
    printf("%d", sum);
    return 0;
} 