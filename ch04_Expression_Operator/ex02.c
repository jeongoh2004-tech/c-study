/*4장 수식과 연산자 실습 문제*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
   int time=0;
   int hour, min, sec;
   scanf("%d", &time);
   hour= time/3600;
   time%=3600;
   min = time/60;
   time%=60;
   sec=time;
   printf("%d:%d:%d", hour, min, sec); 
   return 0;
}
/*응용문제
define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
   int time=0;
   int hour, min, sec;
   scanf("%d", &time);
   hour= time/3600;
   time%=3600;
   min = time/60;
   time%=60;
   sec=time;
   printf("%02d:%02d:%02d", hour, min, sec); 
   return 0;
}
*/