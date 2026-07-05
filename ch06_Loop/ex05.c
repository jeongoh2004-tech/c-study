/*6장 반복문 실습 문제*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        for(int j=0; j<N-i; j++){ //((2*N-1)-(2*i-1))/2 == N-i-> 이 식 전체 갯수에 별개수 뺀다음에 2로 나누어 공백의 칸 프린트
            printf(" ");
        }
        for(int j=0; j<2*i-1; j++){
            printf("*");
        }
        for(int j=0; j<N-i; j++){ 
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
     for(int j=0; j<2*N-1; j++){
        if(j>=N-1-i && j<=N-1+i)
            printf("*");
        else
            printf(" ");
    }
    printf("\n");
}