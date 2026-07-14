/*9장 포인터 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int *mid(int *ar);
int main(){
    int ar[3];
    for(int *p=ar; p<ar+3; p++){
        scanf("%d", p);
    }
    printf("%d", *mid(ar));
    return 0;
}
int *mid(int *ar){
    if(*ar>=*(ar+1) && *ar<=*(ar+2)||*ar<=*(ar+1) && *ar>=*(ar+2))
        return ar;
    else if(*(ar+1)>=*ar && *(ar+1)<=*(ar+2)||*(ar+1)<=*ar && *(ar+1)>=*(ar+2))
        return ar+1;
    else
        return ar+2;
}

