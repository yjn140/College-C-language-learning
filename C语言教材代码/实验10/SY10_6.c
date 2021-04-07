#include <stdio.h>
int prime(int n)
{
	int i;
	for (i = 2; i < n - 1; i++)
		if (n % i == 0)
			return 0;
	return 1;
}
int main()
{
	int m, n, k = 0, flag;
	for (n = 2; n < 2000; n++)
		if (!prime(n))
			continue;
		else
		{
			m = n;
			flag = 1;
			while (m > 0)
			{
				m = m / 10;
				if (m == 1 || !prime(m))
				{
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				printf("\t%d", n);
				k++;
				if (k % 5 == 0)
					printf("\n");
			}
		}
	return 0;
}
