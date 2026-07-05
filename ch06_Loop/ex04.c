/*6장 반복문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int small= (N<M) ? N : M;
    int i, common=1;
    for(i=1; i<=small; i++){
        if(N%i==0 && M%i==0)
            common=i;
    } 
    printf("%d", common);
    return 0;
} 
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int small= (N<M) ? N : M;
    int i=1, common;
    while(i<=small){
        if(N%i==0 && M%i==0)
            common=i;
        i++;
    }
    printf("%d", common);
    return 0;
}
*/