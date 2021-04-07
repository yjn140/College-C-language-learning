#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int m, a, b, c;
	srand(time(0));
	m = rand() % 900 + 100; /* 产生一个3位的随机整数 */
	a = m % 10;
	b = m % 100 / 10;
	c = m / 100;
	if (a * a * a + b * b * b + c * c * c == m)
		printf("%d是水仙花数\n", m);
	else
		printf("%d不是水仙花数\n", m);
}
