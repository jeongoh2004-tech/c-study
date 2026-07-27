/*12장 동적 할당 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
    char name[8];
    int kor, eng, math;
    double avg;
}student;
int main(){
    int N;
    scanf("%d", &N);
    student *st=(student *)malloc(N*sizeof(student));
    for(student *p=st; p<st+N; p++){
        scanf("%s %d %d %d", p->name, &p->kor, &p->eng, &p->math);
        p->avg=(double)(p->kor+p->eng+p->math)/3;
    }
    for(student *p=st; p<st+N; p++){
        printf("%s %.1lf ", p->name, p->avg);
        if(p->kor>=90 || p->eng>=90 || p->math>=90)
            printf("GREAT ");
        if(p->kor<70 || p->eng<70 || p->math<70)
            printf("BAD ");
        printf("\n");
    }
    free(st);
    return 0;
}