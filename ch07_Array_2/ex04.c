/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int x[10];
    for(int i=0; i<10; i++){
        scanf("%d", &x[i]);
    }
    int count_1=0, count_2=0, count_3=0;
    for(int i=0; i<10; i++){
        if(x[i]==1)
            count_1++;
        else if(x[i]==2)
            count_2++;
        else if(x[i]==3)
            count_3++;
    }
    printf("1: ");
    for(int i=0; i<count_1; i++){
        printf("*");
    }
    printf("\n2: ");
    for(int i=0; i<count_2; i++){
        printf("*");
    }
    printf("\n3:");
    for(int i=0; i<count_3; i++){
        printf("*");
    }
    return 0;
}