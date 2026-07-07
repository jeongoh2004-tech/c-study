/*7장 다차원 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    char x[6][5]={{'Z', 'E', 'R', 'O', '-'}, {'O', 'N', 'E', '-', '-'}, {'T', 'W', 'O', '-', '-'}, {'T', 'H', 'R', 'E', 'E'}, {'F', 'O', 'U', 'R', '-'}, {'F', 'I', 'V', 'E', '-'}};   
    for (int i=0; i<3; i++){
        int N;
        scanf("%d", &N);
        for(int j=0; j<5; j++){
            printf("%c", x[N][j]);
        }
        printf("\n");
    }
    return 0;
}