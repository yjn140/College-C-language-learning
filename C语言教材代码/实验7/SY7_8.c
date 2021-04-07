#include <stdio.h>
int main()
{
	int i = 2, m, n;
	printf("Enter an integer m:");
	scanf("%d", &m);
	printf("%d=", m);
	do
	{
		if (m % i == 0)
		{
			printf("%d*", i);
			m = m / i;
		}
		else
			i++;
	} while (m != i);
	printf("%d\n", m);
	return 0;
}
