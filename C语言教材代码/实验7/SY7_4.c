#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, n, m, k, flag;
	for (n = 100; n < 1000; n++)
	{
		flag = 0; /* 标志置0 */
		k = sqrt(n);
		for (i = 2; i <= k; i++) /* 判断是否为素数 */
			if (n % i == 0)
			{
				flag = 1; /* 标志置1，非素数 */
				break;
			}
		if (flag)
			continue; /* 判断下一个数 */
		k = n;
		m = 0;
		while (k > 0) /* 求反序数 */
		{
			m = m * 10 + k % 10;
			k /= 10;
		}
		if (m == n) /* 条件满足，则是要找的数 */
		{
			printf("%d\t", n);
			if (++j % 5 == 0)
				printf("\n");
		}
	}
	return 0;
}
