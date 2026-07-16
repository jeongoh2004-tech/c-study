/*11장 구조체 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
typedef struct student{
    char name[20];
    int score1, score2, score3;
    struct student *next;
}student;

int main(){
    int N;
    scanf("%d", &N);
    student st[20];
    for(student *p=st; p<st+N; p++){
        if(p==st+N-1){
            p->next=NULL;
        }
        else{
            p->next=p+1;
        }
    }
    student *q=st;
    while(q!=NULL){
        scanf("%s %d %d %d", q->name, &q->score1, &q->score2, &q->score3);
        printf("%s ", q->name);
        double avg=q->score1+q->score2+q->score3;
        avg/=3; printf("%.1f ", avg);
        if(avg>=90)
            printf("A\n");
        else if(avg>=80)
            printf("B\n");
        else if(avg>=70)
            printf("C\n");
        else 
            printf("F\n");
        q=q->next;
    }
    return 0;
}