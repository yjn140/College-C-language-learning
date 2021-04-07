#include <stdio.h>
int cjs(int n)
{
	int k = 1, s = 0, m = n;
	while (m)
	{
		k *= m % 10;
		s += m % 10;
		m /= 10;
	}
	if (k > s)
		return 1;
	return 0;
}
int main()
{
	int n, k = 0;
	for (n = 1; n < 100; n++)
		if (cjs(n))
		{
			printf("\t%d", n);
			k++;
			if (k % 5 == 0)
				printf("\n");
		}
	return 0;
}
