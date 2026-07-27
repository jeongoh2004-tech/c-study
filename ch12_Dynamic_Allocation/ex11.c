/*12장 동적 할당 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int *arr=(int *)malloc(5*sizeof(int));
    int *new_arr;
    int count=0;
    while(1){
        int N;
        scanf("%d", &N);
        count++;
        if(count<=5){
            *(arr+count-1)=N;
        }
        else if((count-5)%3==1){
            new_arr=(int *)malloc((5+((count-5)/3+1)*3)*sizeof(int));
            for(int i=0; i<count-1; i++){
                *(new_arr+i)=*(arr+i);
            }
            *(new_arr+count-1)=N;
            free(arr);
            arr=new_arr;
        }
        else{
            *(arr+count-1)=N;
        }
        if(N==-1)
            break;
        else if(count==20)
            break;
    }
    for(int i=0; i<count; i++){
        printf(" %d", *(arr+i));
    }
    free(arr);
    return 0;
}