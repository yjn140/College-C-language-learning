#include <stdio.h>
int main()
{
	long x;
	int n = 0;
	do
	{
		printf("Please input x:\n");
		scanf("%ld", &x);
	} while (x < 0);
	do
	{
		x = x / 10;
		n++;
	} while (x > 0);
	printf("The number of digit is:%d\n", n);
	return 0;
}
