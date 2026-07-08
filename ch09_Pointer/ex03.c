/*9장 포인터 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int ar[50]={0}, N;
    int *par=ar;
    scanf("%d", &N);
    int cnt=0;
    for(par=ar; par<ar+N; par++){
        scanf("%d", par);
    } 
    for(par=ar; par<ar+N; par++){
        if(*par!=0){
            cnt++;
        }
        else{
            break;
        }
    }
    printf("%d", cnt);
    return 0;
}

