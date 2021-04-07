#include <stdio.h>
#include <math.h>
int fib(int n)
{
	int f;
	if (n == 1 || n == 2)
		f = 1;
	else
		f = fib(n - 1) + fib(n - 2);
	return f;
}
int main()
{
	int i, m, result;
	printf("Please input a natural number:");
	scanf("%d", &m);
	i = 1;
	while ((result = fib(i)) < m)
		i++;
	printf("Meet the conditions of the Fibonacci number is:%d\n", result);
	return 0;
}
