#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter a,b=");	/* 输出提示 */
	scanf("%o,%x", &a, &b); /* 分别以八进制、十六进制输入变量a和b的值 */
	c = a * b;
	printf("%d,%o,%x\n", c, c, c); /* 分别以十进制、八进制、十六进制输出变量c的值 */
	return 0;
}
