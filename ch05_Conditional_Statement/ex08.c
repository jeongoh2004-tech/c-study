/*5장 조건문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if(N%4==0){
        if(N%100==0){
            if(N%400==0)
                printf("leap year");
            else
                printf("common year");

        }
        else
            printf("leap year");
    }
    else
        printf("common year");
    return 0;
} 

/*단일
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if(N%400==0)
        printf("leap year");
    else if(N%100==0)
        printf("commom year");
    else if(N%4==0)
        printf("leap year");
    else 
        printf("common year");
    return 0;
} 
*/