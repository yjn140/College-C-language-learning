#include <stdio.h>
int gcd(int x, int y)
{
	if (y == 0)
		return x;
	else
		gcd(y, x % y);
}
int main()
{
	int a, b;
	printf("Please input two integers:");
	scanf("%d%d", &a, &b);
	printf("The %d and %d greatest common divisor is:%d", a, b, gcd(a, b));
	return 0;
}