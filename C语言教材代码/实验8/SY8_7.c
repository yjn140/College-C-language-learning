#include <stdio.h>
#define N 10
int main()
{
	int i, j, k = 0, t, d, a[N];
	long n, m = 0;
	printf("Please enter a long integer.");
	scanf("%ld", &n);
	while (n > 0)
	{
		t = n % 10;
		if (t % 2 != 0)
			a[k++] = t;
		n /= 10;
	}
	for (i = 0; i < k - 1; i++)
	{
		d = i;
		for (j = i + 1; j < k; j++)
			if (a[j] > a[d])
				d = j;
		if (d != i)
		{
			t = a[d];
			a[d] = a[i];
			a[i] = t;
		}
	}
	for (i = 0; i < k; i++)
		m = a[i] + m * 10;
	printf("min=%ld", m);
	return 0;
}
