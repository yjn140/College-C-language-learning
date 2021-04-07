#include <stdio.h>
int main()
{
	int m, sum = 0, n = 1; /* 定义变量并赋初值 */
	printf("Please input a integer(>1):");
	scanf("%d", &m);
	do
	{
		if (m % n == 0) /* 判断是否为因子 */
			sum = sum + n;
		n++;
	} while (n <= m - 1);
	if (m == sum) /* 满足此条件为完数 */
		printf("%d is a complete number.\n", m);
	else
		printf("%d isn't a complete number.\n", m);
	return 0;
}
