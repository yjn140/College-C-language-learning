#include <stdio.h>
int main()
{
	int n;
	printf("请输入一个正整数："); /* 输出提示 */
	scanf("%d", &n);
	if (n % 2 == 0) /* 判断是否为偶数 */
		printf("%d是一个偶数\n", n);
	else
		printf("%d是一个奇数\n", n);
	return 0;
}
