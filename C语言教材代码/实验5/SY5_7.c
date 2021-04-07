#include <stdio.h>
int main()
{
	int a, b;
	char operator;
	printf("Please input two integer:");
	scanf("%d %d", &a, &b);
	printf("Please input operator(+ or -):");
	scanf("%*c%c", &operator);
	switch (operator)
	{
	case '+':
		printf("%d+%d=%d\n", a, b, a + b);
		break;
	case '-':
		printf("%d-%d=%d\n", a, b, a - b);
		break;
	default:
		printf("Input error.\n");
	}
	return 0;
}
