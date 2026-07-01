/*2장변수와 자료형*/
/*문제3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, ch_n;
	char ch;
	scanf("%d", &n);
	printf("(int->int) %d\n", n);

	ch = (char)n;
	printf("(int->char->int) %d\n", ch);

	return 0;
}
*/
/*문제4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, ch_n;
	unsigned char ch;
	scanf("%d", &n);
	printf("(int->int) %d\n", n);

	ch = (char)n;
	printf("(int->unsigned char->int) %d\n", ch);
	return 0;
}
*/

/*문제6
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%c\n", num+'0');
	printf("%d\n", num);
	return 0;
}
*/

/*문제8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	char ch = 'A'+num;
	printf("The %dth upper case letter in the English alphabe is %c.", num, ch);
	return 0;
}
*/

/*문제9
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char ch = '0';
	scanf("%c", &ch);
	int distance = 0;
	distance = ch - 'a';
	printf("%c", 'A' + distance);
	return 0;
}
*/
/*문제10
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char ch = '0';
	scanf("%c", &ch);
	int distance = 0;
	distance = ch - 'A';
	printf("%c", 'a' + distance);
	return 0;
}
*/