#include <stdio.h>
int main()
{
	char ch;
	long m = 0, n, nx = 0;
	while ((ch = getchar()) != '\n')
	{
		if (ch >= '0' && ch <= '9')
			m = m * 10 + ch - '0';
		else
			putchar(ch);
	}
	n = m;
	while (m != 0)
	{
		nx = nx * 10 + m % 10;
		m = m / 10;
	}
	printf("\n%ld reverse number is %ld\n", n, nx);
	return 0;
}
