/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int x[10];
    for(int i=0; i<10; i++){
        scanf("%d", &x[i]);
    }
    for(int i=0; i<10; i++){
        int count=0;
        int flag=0;
        for(int j=0; j<10; j++){
            if(x[i]==x[j])
                count++;
        }
        for(int j=0; j<i; j++){ // 앞에 입력되었는지 확인하는 코드
            if(x[i]==x[j]){
                flag=1;
                break;
            }
        }
        if(flag!=1){
            printf("%d %d\n", x[i], count);
        }
    }
    return 0;
}