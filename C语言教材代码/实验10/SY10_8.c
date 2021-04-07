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
	int n, k, flag;
	for (n = 4; n < 20; n += 2)
	{
		for (k = 2; k < n; k++)
		{
			if (prime(k) && prime(n - k))
				break;
			flag = 1;
		}
		if (flag)
		{
			printf("%d=%d+%d\n", n, k, n - k);
			flag = 0;
		}
	}
	return 0;
}
