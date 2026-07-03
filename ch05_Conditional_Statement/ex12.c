/*5장 조건문 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int N;
    scanf("%d" ,&N);
    int M;
    scanf("%d", &M);
    int five_hun, one_hun;
    switch(N){
        case 1:
            M-=500;
            five_hun=M/500;
            one_hun=M%500/100;
            printf("Americano\n");
            printf("%d %d", five_hun, one_hun);
            break;
        case 2:
            M-=400;
            five_hun=M/500;
            one_hun=M%500/100;
            printf("Cafe Latte\n");
            printf("%d %d", five_hun, one_hun);
            break;
        default:
            M-=300;
            five_hun=M/500;
            one_hun=M%500/100;
            printf("Lemon Tea\n");
            printf("%d %d", five_hun, one_hun);
            break;
    }
    return 0;
}
/*
if문활용
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int N;
    scanf("%d" ,&N);
    int M;
    scanf("%d", &M);
    int five_hun, one_hun;
    if(N==1){
        M-=500;
        five_hun=M/500;
        one_hun=M%500/100;
        printf("Americano\n");
        printf("%d %d", five_hun, one_hun);
    }
    else if(N==2){
        M-=400;
        five_hun=M/500;
        one_hun=M%500/100;
        printf("Cafe Latte\n");
        printf("%d %d", five_hun, one_hun);
    }
    else{
        M-=300;
        five_hun=M/500;
        one_hun=M%500/100;
        printf("Lemon Tea\n");
        printf("%d %d", five_hun, one_hun);
    }
    return 0;
}
*/