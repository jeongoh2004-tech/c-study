/*11장 구조체 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
typedef struct{
    int gender, weight, height;
}st;
int main(){
    int N;
    scanf("%d", &N);
    st data[10];
    for(st *p=data; p<data+N; p++){
        scanf("%d %d %d", &p->gender, &p->weight, &p->height);
    }
    int count1=0, count2=0, count3=0;
    for(st *p=data; p<data+N; p++){
        if(p->gender==1){
            if(p->height<165){
                if(p->weight<60)
                    count1++;
                else if(p->weight<70)
                    count3++;
                else
                    count2++;
            }
            else if(p->height<175){
                if(p->weight<60)
                    count2++;
                else if(p->weight<70)
                    count1++;
                else
                    count3++;
            }
            else{
                if(p->weight<60)
                    count3++;
                else if(p->weight<70)
                    count2++;
                else
                    count1++;
            }
        }
        else{
            if(p->height<165){
                if(p->weight<50)
                    count1++;
                else if(p->weight<60)
                    count3++;
                else
                    count2++;
            }
            else if(p->height<175){
                if(p->weight<50)
                    count2++;
                else if(p->weight<60)
                    count1++;
                else
                    count3++;
            }
            else{
                if(p->weight<50)
                    count3++;
                else if(p->weight<60)
                    count2++;
                else
                    count1++;
            }
        }
    }
    printf("%d %d %d", count1, count2, count3);
    return 0;
}