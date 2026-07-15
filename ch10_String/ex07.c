/*10장 문자열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main(){
    int N;
    scanf("%d", &N);
    char *number[10]={"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *digit[4]={"", "TEN", "HUN", "THO"};
    int or=N, i=0;
    int num[4]={0};
    while(or){
        num[i]=or%10;
        or/=10;
        i++;
    }
    for(int j=i-1; j>=0; j--){
        if(num[j]!=0){
            printf("%s %s ", number[num[j]], digit[j]);
        }
    }
    return 0;
}