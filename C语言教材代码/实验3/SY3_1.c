#include <stdio.h>
int main()
{
	int a = 126;				   /* 定义整型变量a并赋值 */
	long b = -1234567;			   /* 定义长整型变量b并赋值 */
	unsigned c = 50000;			   /* 定义无符号变量c并赋值 */
	printf("%d,%o,%x\n", a, a, a); /* 分别按十进制、八进制及十六进制输出 */
	printf("%5d,%-5d\n", a, a);	   /* 分别按右对齐、左对齐格式输出 */
	printf("%10ld,%3u\n", b, c);   /* 指定宽度输出 */
	return 0;
}
