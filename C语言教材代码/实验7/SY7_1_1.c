#include <stdio.h>
int main()
{
	int i;
	for (i = 6; i < 100; i++)
	{
		if (i % 3 == 0 && i % 10 == 6)
			printf("%d\n", i);
	}
	return 0;
}
