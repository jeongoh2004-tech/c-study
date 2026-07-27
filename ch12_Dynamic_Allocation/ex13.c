    /*12장 동적 할당 실습 문제*/
    #define _CRT_SECURE_NO_WARNINGS 
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    int main(){
        int N;
        scanf("%d", &N);
        int *st=(int *)malloc(N*sizeof(int));
        if(st==NULL){
            printf("fail");
            return -1;
        }
        for(int *p=st; p<st+N; p++){
            scanf("%d", p);
        }
        int D;
        scanf("%d", &D);
        int result=N-D;
        st=(int *)realloc(st, result*sizeof(int));
        for(int *p=st; p<st+result; p++){
            printf("%d\n", *p);
        }
        free(st);
        return 0;
    }