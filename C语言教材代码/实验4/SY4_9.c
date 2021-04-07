#include <stdio.h>
int main()
{
	int a, b, c, max;
	printf("\nPlease input 3 integers:");
	scanf("%d %d %d", &a, &b, &c);
	max = a > b ? a : b;
	max = max > c ? max : c;
	printf("max=%d\n", max);
	return 0;
}