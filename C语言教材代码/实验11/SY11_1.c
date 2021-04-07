#include <stdio.h>
int main()
{
	int n, s;
	printf("输入n的值：");
	scanf("%d", &n); /* 输入n的值 */
	s = sum(n);		 /* 调用递归函数sum */
	printf("%d", s);
	return 0;
}
int sum(int n)
{
	if (n == 0) /* 递归结束条件 */
		return 0;
	else
		return n + sum(n - 1); /* 递归调用 */
}
