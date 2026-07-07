/*8장 함수 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_prime(int);
int next_prime(int);
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int count=0;
    while(count!=M){
        N=next_prime(N);
        count++;
        printf(" %d", N);
    }
    return 0;
}
int is_prime(int x){
    int flag=0;
    for(int i=2; i<x; i++){
        if(x%i==0){
            flag++;
            break;
        }
    }
    return flag==0; // 같으면 1반환, 다르면 0반환
}
int next_prime(int x){
    do{
        x++;
    } while(is_prime(x)!=1);
    return x;
}