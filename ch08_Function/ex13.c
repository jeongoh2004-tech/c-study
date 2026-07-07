/*8장 함수 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count_3(int);
int main()
{
    int N;
    scanf("%d", &N);
    int sum=0;
    for(int i=1; i<=N; i++){
        sum+=count_3(i);
    }
    printf("%d", sum);
    return 0;
}
int count_3(int x){
    int count=0;
    while(x!=0){ //while(x)랑 같은 의미
        if(x%10==3){
            count++;
        }
        x/=10;
    }
    return count;
}