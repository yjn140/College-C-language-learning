#include <stdio.h>
int main()
{
	int i, j, n = 0, m, k, a[100], b[5];
	for (i = 15; i <= 100; i++)
		if (i % 3 == 0)
		{
			m = i;
			j = 0;
			k = 0;
			do
			{
				b[j] = m % 10;
				m /= 10;
				if (b[j] == 5)
					k++;
				j++;
			} while (m > 0);
			if (k > 0)
				a[n++] = i;
		}
	for (i = 0; i < n; i++)
		printf("%4d", a[i]);
	return 0;
}
