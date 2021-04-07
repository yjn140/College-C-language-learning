#include <stdio.h>
long power(int x, int n)
{
	static long y;
	if (n > 0)
		y = x * power(x, n - 1);
	else
		y = 1;
	return y;
}
int main()
{
	int a, b;
	long t;
	printf("Please input a and b:");
	scanf("%d,%d", &a, &b);
	t = power(a, b);
	printf("result=%ld", t);
	return 0;
}