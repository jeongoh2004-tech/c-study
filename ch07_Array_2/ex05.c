/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    char ch[5];
    for (int i = 0; i < 5; i++) {
        scanf("%c", &ch[i]);
    }
    //배열을 회전시키는 것이 아니라, 시작 위치만 바꾸면서 원형(circular) 배열처럼 접근하는 코드
    for (int i = 5; i > 0; i--) { //i는 출력을 시작할 위치를 정하고, j는 그 위치에서 차례대로 한 칸씩 이동하며 출력하도록 하는 역할이다.
        for (int j = 0; j < 5; j++) { //코드를 뒤로 한칸씩 오른쪽으로 움직일때 코드를 한칸씩 왼쪽으로 이동시키고 싶으면 i=0; i<5; i++로 변경하면 됨
            printf("%c", ch[(i + j) % 5]); //배열의 시작 인덱스만 바꾸어 출력하고, 인덱스가 배열의 끝을 넘으면 % 연산으로 다시 처음으로 돌아오도록 함
        }
        printf("\n");
    }
    return 0;
}
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char ch[5];
    for(int i=0; i<5; i++){
        scanf("%c", &ch[i]);
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%c", ch[j]);
        }
        printf("\n");
        for(int j=4; j>0; j--){
            int tmp=ch[j];
            ch[j]=ch[j-1];
            ch[j-1]=tmp;
        }
    }
    return 0;
}
*/