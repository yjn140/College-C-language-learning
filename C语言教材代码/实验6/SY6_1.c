#include <stdio.h>
int main()
{
	int i, n;
	float sum = 0, flag = 1.0;
	printf("Input n:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) /* 循环n次 */
	{
		sum = sum + flag * i / (2 * i - 1); /* 累加一项 */
		flag = -flag;						/* 改变累加项的符号 */
	}
	printf("Sum=%f\n", sum);
	return 0;
}
