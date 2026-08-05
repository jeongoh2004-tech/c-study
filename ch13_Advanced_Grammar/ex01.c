    /*13장 고급 문법 실습 문제*/
    #define _CRT_SECURE_NO_WARNINGS 
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    int dec(int x, int y);
    int main(){
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%d", dec(x, y));
        return 0;
    }
    int dec(int x, int y){
        int result=x%y;
        if(result==0){
            return y;
        }
        else(dec(y, result));
    }
