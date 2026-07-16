/*11장 구조체 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
typedef struct{
    char name[9];
    int kor, eng, math;
    double avg;
    char grade;
}student;
int main(){
    int N;
    scanf("%d", &N);
    student st[50], *p=NULL;
    for(p=st; p<st+N; p++){
        scanf("%s %d %d %d", p->name, &p->kor, &p->eng, &p->math);
        p->avg=(double)(p->kor+p->eng+p->math)/3;
        if(p->avg>=90)
            p->grade='A';
        else if(p->avg>=80)
            p->grade='B';
        else if(p->avg>=70)
            p->grade='C';
        else
            p->grade='D';
    }
    for(p=st; p<st+N; p++){
        printf("%s %.1lf %c\n", p->name, p->avg, p->grade);
    }
    return 0;
}