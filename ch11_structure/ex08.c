/*11장 구조체 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
typedef struct{
    double real, imaginary;
}complex;
complex add(complex a, complex b);
int main(){
    complex num[3];
    for(complex *p=num; p<num+2; p++){
        scanf("%lf %lf", &p->real, &p->imaginary);
    }
    num[2]=add(num[0], num[1]);
    printf("%.1lf + %.1lfi", num[2].real, num[2].imaginary);
    return 0;
}
complex add(complex a, complex b){
    complex num;
    num.real=a.real+b.real;
    num.imaginary=a.imaginary+b.imaginary;
    return num;
}