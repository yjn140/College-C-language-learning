#include <stdio.h>
int main()
{
	int i, n, m, nx;
	for (n = 1000; n < 10000; n++)
	{
		m = n; /* 变量n的值存到变量m中 */
		nx = 0;
		for (i = 0; i < 4; i++)
		{
			nx = nx * 10 + m % 10; /* 生成逆序数 */
			m /= 10;
		}
		if (n * 9 == nx) /* 若逆序数是原数的9倍 */
			printf("%8d-->%8d\n", n, nx);
	}
	return 0;
}
