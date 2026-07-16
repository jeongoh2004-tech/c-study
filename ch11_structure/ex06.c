/*11장 구조체 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
typedef struct{
    int num, rank;
}data;
int main(){
    data d[10];
    for(data *p=d; p<d+10; p++){
        scanf("%d", &p->num);
        p->rank=1;
    }
    for(data *p=d; p<d+10; p++){
        for(data *q=d; q<d+10; q++){
            if(p->num<q->num)
                p->rank++;
        }
    }
    for(data *p=d; p<d+10; p++){
        if(p->rank==3)
            printf("%d ", p->num);
    }
    for(data *p=d; p<d+10; p++){
        if(p->rank==7)
            printf("%d", p->num);
    }
    return 0;
}