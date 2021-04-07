#include <stdio.h>
int main()
{
	int a, b;
	a = sizeof(3 + 5.0); /* 变量a的值为3+5.0所占的字节数 */
	b = sizeof 3 + 5.0;	 /* 变量a的值为3所占的字节数与5.0的和 */
	printf("%d,%d,%d\n", a, b, sizeof("china"));
	return 0;
}
