/*11장 구조체 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
typedef struct{
    int year, month, day;
}today;
today *select_min(today *p, today *q);
int main(){
    today day[2];
    for(today *p=day; p<day+2; p++){
        scanf("%d/%d/%d", &p->year, &p->month, &p->day);
    }
    today *p=select_min(day, day+1);
    printf("%d/%d/%d", p->year, p->month, p->day);
    return 0;
}
today *select_min(today *p, today *q){
    if(p->year>q->year){
        return q;
    }
    else if(p->year<q->year){
        return p;
    }
    else{
        if(p->month>q->month){
            return q;
        }
        else if(p->month<q->month){
            return p;
        }
        else{
            if(p->day>q->day){
                return q;
            }
            else{
                return p;
            }
        }
    }
}
