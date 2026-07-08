/*9장 포인터 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int x, y, z, temp=0;
    int *px, *py, *pz, *tmp;
    px=&x;
    py=&y;
    pz=&z;
    tmp=&temp;
    scanf("%d %d %d", px, py, pz);
    tmp=pz;
    pz=py;
    py=px;
    px=tmp;
    printf("%d %d %d", *px, *py, *pz);
    return 0;
}

