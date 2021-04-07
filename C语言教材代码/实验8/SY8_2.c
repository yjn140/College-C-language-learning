#include <stdio.h>
int main()
{
	int i, j, a[1000], k = 0, m, n, flag = 0;
	for (i = 7; i < 2000; i += 2)
	{
		for (j = 2; j <= i / 2; j++) /* 在2到i/2之间找i的因子 */
			if (i % j == 0)
				break;	/* 若找到一个因子，则退出当前循环 */
		if (j > i / 2)	/* 条件若成立，则没有因子 */
			a[k++] = i; /* 将素数i存入数组 */
	}
	for (i = 0; i < k - 1; i++)
		for (j = 1; j < k; j++)
			if (a[j] - a[i] == 1898) /* 条件若成立，则找到符合的数 */
			{
				m = i;
				n = j;
				flag = 1; /* 标志记为1，表示找到 */
				break;
			}
	if (flag)
		printf("%d-%d=%d", a[n], a[m], a[n] - a[m]);
	else
		printf("not found!");
	return 0;
}
