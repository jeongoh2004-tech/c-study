/*5장 조건문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int year_a, month_a, day_a;
    int year_b, month_b, day_b;
    scanf("%d/%d/%d", &year_a, &month_a, &day_a);
    scanf("%d/%d/%d", &year_b, &month_b, &day_b);
    if(year_a<year_b)
        printf("%d/%02d/%02d", year_a, month_a, day_a);
    else if(year_b<year_a)
        printf("%d/%02d/%02d", year_b, month_b, day_b);
    else{
        if(month_a<month_b)
            printf("%d/%02d/%02d", year_a, month_a, day_a);
        else if(month_b<month_a)
            printf("%d/%02d/%02d", year_b, month_b, day_b);
        else{
            if(day_a<day_b)
                printf("%d/%02d/%02d", year_a, month_a, day_a);
            else if(day_b<day_a)
                printf("%d/%02d/%02d", year_b, month_b, day_b);
            else
                printf("%d/%02d/%02d*", year_a, month_a, day_a);
        }
    }
    return 0;
} 
/*단일
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int year_a, month_a, day_a;
    int year_b, month_b, day_b;
    scanf("%d/%d/%d", &year_a, &month_a, &day_a);
    scanf("%d/%d/%d", &year_b, &month_b, &day_b);
    if(year_a<year_b)
        printf("%d/%02d/%02d", year_a, month_a, day_a);
    else if(year_b<year_a)
        printf("%d/%02d/%02d", year_b, month_b, day_b);
    else if(month_a<month_b)
        printf("%d/%02d/%02d", year_a, month_a, day_a);
    else if(month_b<month_a)
        printf("%d/%02d/%02d", year_b, month_b, day_b);
    else if(day_a<day_b)
        printf("%d/%02d/%02d", year_a, month_a, day_a);
    else if(day_b<day_a)
        printf("%d/%02d/%02d", year_b, month_b, day_b);
    else
        printf("%d/%02d/%02d*", year_a, month_a, day_a);   
    return 0;
} 
*/