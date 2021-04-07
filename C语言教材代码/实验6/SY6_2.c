#include <stdio.h>
int main()
{
	int n, i;
	double sum = 0, product = 1; /* 声明变量并赋初值 */
	printf("Input n:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		product = product * i; /* 计算阶乘 */
		sum = sum + product;   /* 累加一项 */
	}
	printf("sum=%lf\n", sum);
	return 0;
}
