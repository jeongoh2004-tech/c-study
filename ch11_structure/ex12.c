/*11장 구조체 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
typedef struct{
    char name[10];
    int kor, eng, math;
    double avg;
}student;
void read_data(student *st);
void cal_avg(student *st);
void sort(student *st);
void print_score(student *st);
int main(){
    student st[10];
    read_data(st);
    cal_avg(st);
    sort(st);
    print_score(st);
    return 0;
}
void read_data(student *st){
    for(student *p=st; p<st+10; p++){
        scanf("%s %d %d %d", p->name, &p->kor, &p->eng, &p->math);
    }
}
void cal_avg(student *st){
    for(student *p=st; p<st+10; p++){
        p->avg=(double)(p->kor+p->eng+p->math)/3;
    }
}
void sort(student *st){
    for(student *p=st; p<st+10-1; p++){
        for(student *q=st; q<st+10-1-(p-st); q++){
            if(q->avg<(q+1)->avg){
                student tmp=*q;
                *q=*(q+1);
                *(q+1)=tmp;
            }
        }
    }
}
void print_score(student *st){
    printf("%s %.2lf\n", st->name, st->avg);
    printf("%s %.2lf\n", (st+9)->name, (st+9)->avg);
    for(student *p=st+7; p<st+10; p++){
        printf("%s %.2lf\n", p->name, p->avg);
    }
}
