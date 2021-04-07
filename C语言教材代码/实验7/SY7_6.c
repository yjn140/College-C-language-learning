#include <stdio.h>
int main()
{
	int i, j, n, m, t;
	for (i = 10; i < 100; i++)
	{
		j = i % 10 * 10 + i / 10;
		m = i * i;
		n = j * j;
		t = 0;
		while (n)
		{
			t = t * 10 + n % 10;
			n /= 10;
		}
		if (m == t)
			printf("(%d,%d)\n", i, j);
	}
	return 0;
}
