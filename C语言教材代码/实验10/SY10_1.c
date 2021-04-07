#include <stdio.h>
int gbs(int m, int n)
{
	int r, p;
	p = m * n;
	while ((r = m % n) != 0)
	{
		m = n;
		n = r;
	}
	p = p / n;
	return (p);
}
int main()
{
	int a, b, c;
	printf("Enter 2 integers:");
	scanf("%d,%d", &a, &b);
	c = gbs(a, b);
	printf("c=%d\n", c);
	return 0;
}
