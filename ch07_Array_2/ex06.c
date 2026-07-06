/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    char ch[3];
    for(int i=0; i<3; i++){
        scanf("%c", &ch[i]);
    }
    getchar();
    char predict[5];
    char state[3]={'_', '_', '_'}; //현재 상태를 저장하는 배열
    for(int i=0; i<5; i++){
        scanf("%c", &predict[i]);
        getchar();
        int count=0;
        for(int j=0; j<3; j++){
            if(predict[i]==ch[j]){
                state[j]=predict[i];
            }
            if(ch[j]==state[j]){
                count++;
            }
        }
        for(int j=0; j<3; j++){
            printf(" %c", state[j]);
        }
        printf("\n");
        if(count==3)
            break;
    }
    return 0;
}