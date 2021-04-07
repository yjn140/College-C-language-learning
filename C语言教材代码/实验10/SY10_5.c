#include <stdio.h>
int fun(int n)
{
	int a, b, c, d;
	a = n / 1000;
	b = (n - a * 1000) / 100;
	c = (n - a * 1000 - b * 100) / 10;
	d = n % 10;
	if ((b == 0) && ((a * 100 + c * 10 + d) * 9 == n))
		return 1;
	else
		return 0;
}
int main()
{
	int i;
	for (i = 1000; i < 10000; i++)
		if (fun(i))
			printf("%6d", i);
	printf("\n");
	return 0;
}
