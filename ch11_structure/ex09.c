/*11장 구조체 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
typedef struct{
    int high, low;
    char pass;
    int pass_distance, st_distance;
}result;
void passorfail(result *p);
int main(){
    result st;
    result *p=&st;
    scanf("%d %d %d", &p->high, &p->low, &p->pass_distance);
    p->st_distance=p->high-p->low;
    passorfail(p);
    printf("%d %c", p->st_distance, p->pass);
    return 0;
}
void passorfail(result *p){
    if(p->st_distance<=p->pass_distance)
        p->pass='P';
    else 
        p->pass='F';
}