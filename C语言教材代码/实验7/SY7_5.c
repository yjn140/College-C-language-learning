#include <stdio.h>
int main()
{
	long n, m, sum, p;
	int i, j = 0, k;
	for (n = 1; n < 200000; n++)
	{
		m = n;
		sum = 0; /* 累加和置0 */
		while (m)
		{
			k = m % 10; /* 取出一位数字 */
			p = 1;
			for (i = 2; i <= k; i++) /* 求阶乘 */
				p *= i;
			sum += p; /* 累加阶乘和 */
			m /= 10;
		}
		if (sum == n) /* 阶乘和与原数相等，则满足条件 */
		{
			printf("%ld\t", n);
			if (++j % 2 == 0)
				printf("\n");
		}
	}
	return 0;
}
