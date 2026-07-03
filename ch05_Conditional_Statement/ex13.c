/*5장 조건문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double avg=(double)(a+b+c)/3;
    printf("%.2lf\n", avg);
    if(avg>=75)
        printf("A");
    else if(avg>=50)
        printf("B");
    else
        printf("F");
    return 0;
}
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double avg=(double)(a+b+c)/3;
    printf("%.2lf\n", avg);
    int grade;
    grade = (avg>=75) ? 0 : (avg>=50 ? 1 : 2);
    switch(grade){
        case 0:
            printf("A");
            break;
        case 1:
            printf("B");
            break;
        default:
            printf("F");
            break;
    }
    return 0;
}
*/