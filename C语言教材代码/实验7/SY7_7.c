#include <stdio.h>
int main()
{
	int i, j, n;
	double e, product;
	e = 1;
	printf("Enter n:");
	scan("%d", &n);
	for (i = 1; i <= n; i++)
	{
		product = 1;
		for (j = 1; j <= i; j++)
			product = product * j;
		e = e + 1 / product;
	}
	printf("e=%.2lf\n", e);
	return 0;
}
