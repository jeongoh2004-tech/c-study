/*11장 구조체 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
typedef struct{
    int hour, minute, second;
}time;
int main(){
    time t1, t2, t3;
    scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second);
    scanf("%d %d %d", &t2.hour, &t2.minute, &t2.second);
    int sum=(t2.hour-t1.hour)*3600+(t2.minute-t1.minute)*60+(t2.second-t1.second);
    t3.hour=sum/3600; sum%=3600;
    t3.minute=sum/60; sum%=60;
    t3.second=sum;
    printf("%d %d %d", t3.hour, t3.minute, t3.second);
    return 0;
}