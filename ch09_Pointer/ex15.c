/*9장 포인터 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void ABC(int *, int k);
int main(){
    int ar[10];
    for(int *p=ar; p<ar+10; p++){
        scanf("%d", p);
    }
    int k=10; 
    for(int *p=ar; p<ar+10; p++, k--){
        ABC(p, k);
    }
     for(int *p=ar; p<ar+10; p++){
        printf(" %d", *p);
    }
}
void ABC(int *first, int k){
    int max=*first, flag=0;
    for(int *p=first; p<first+k; p++){
        if(max<*p){
            max=*p;
            flag=p-first;
        }
    }
    int tmp=*first;
    *first=*(first+flag);
    *(first+flag)=tmp;
}