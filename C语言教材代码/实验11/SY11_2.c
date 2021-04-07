#include <stdio.h>
int main()
{
	void printn(int x); /* 函数声明 */
	int n;
	scanf("%d", &n);
	if (n < 0)
	{
		n = -n;
		putchar('-');
	}
	printn(n); /* 调用函数 */
	return 0;
}
void printn(int x) /* 递归函数的首部 */
{
	if (x >= 0 && x <= 9)
		printf("%d", x);
	else
	{
		printf("%d", x % 10); /* 输出x的个位数字 */
		printn(x / 10);		  /* 将除去个位的数字作为新的整数继续递归 */
	}
}
