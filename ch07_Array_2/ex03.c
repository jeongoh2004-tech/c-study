/*7장 배열 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int x[5];
    for(int i=0; i<5; i++){
        scanf("%d", &x[i]);
    }
    int tmp;
    //선택정렬을 통해 오름차순 혹은 내림차순으로  정리할 수 있다.
    for(int i=0; i<5-1; i++){ //이 코드는 마치 비교할 때 앞에 인덱스가 크면 뒤에 인덱스와 위치를 바꿔 작은값이 앞으로 이동할 수 있도록 움직이는 코드
        for(int j=i+1; j<5; j++){
            if(x[i]>x[j]){  // 오름차순으로 정리할때 내림차순으로 하고 싶으면 조건을 반대로 걸면됨
                tmp=x[i];
                x[i]=x[j];
                x[j]=tmp;
            }
        }
    }
    printf("%d\n%d", x[4], x[3]);
    return 0;
}
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int x[5];
    for(int i=0; i<5; i++){
        scanf("%d", &x[i]);
    }
    int first=(x[0]>=x[1]) ? x[0]:x[1];
    int second=(x[0]>=x[1]) ? x[1]:x[0];
    int tmp;
    for(int i=2; i<5; i++){
        if(x[i]>=first){
            tmp=first;
            first=x[i];
            if(tmp>second){
                second=tmp;
            }
        }
        else if(x[i]>=second){
            second=x[i];
        }
    }
    printf("%d\n%d", first, second);
    return 0;
}
*/