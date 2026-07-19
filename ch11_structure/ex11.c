/*11장 구조체 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
typedef struct{
    char name[10];
    int score;
}student;
student *select_min(student *p);
int main(){
    student st[5];
    for(student *p=st; p<st+5; p++){       
        scanf("%s %d", p->name, &p->score);
    }
    student *p=select_min(st);
    printf("%s %d", p->name, p->score);
    return 0;
}
student *select_min(student *p){
    int min=100;
    student *flag;
    for(student *st=p; st<p+5; st++){
        if(st->score<min){
            min=st->score;
            flag=st;
        }
    }
    return  flag;
}
