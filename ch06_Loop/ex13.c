/*6장 반복문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int N, sum=0, count=0;
    double avg=0;    
    while(1){
        scanf("%d", &N);
        if(N>100)
            continue;
        else if(N<=0)
            break;
        else{
            sum+=N;
            count++;
        }
    }
    avg=(double)sum/count;
    printf("%d %.2lf %d", sum, avg, count);
    return 0;
} 