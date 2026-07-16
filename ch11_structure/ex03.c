/*11장 구조체 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
typedef struct{
    char name[10];
    int score;
}student;
int main(){
    student st[5];
    int sum=0;
    double avg;
    for(student *p=st; p<st+5; p++){
        scanf("%s %d", p->name, &p->score);
        getchar();
        sum+=p->score;
    }
    avg=(double)sum/5;
    for(student *p=st; p<st+5; p++){
        if(p->score<avg)
            printf("%s\n",p->name);
    }
    return 0;
}