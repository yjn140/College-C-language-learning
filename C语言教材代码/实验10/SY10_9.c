#include <stdio.h>
int isno(int n)
{
	int m = n, flag = 0;
	while (m && !flag)
	{
		flag = (m % 10 == 3) || (m % 10 == 5) || (m % 10 == 7);
		m /= 10;
	}
	return flag;
}
int main()
{
	int n, k = 0, flag;
	for (n = 3; n < 100; n++)
		if (isno(n))
		{
			printf("%4d", n);
			k++;
			if (k % 5 == 0)
				printf("\n");
		}
	return 0;
}
