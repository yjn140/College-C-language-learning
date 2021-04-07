#include <stdio.h>
int main()
{
	int m, n;
	printf("Please input the data:");
	scanf("%d", &m);
	n = m * m;		  /* 生成该数的平方数 */
	if (m == n % 100) /* 满足条件则是同构数 */
		printf("%d and %d is.\n", m, n);
	else
		printf("%d is not.\n", m);
	return 0;
}
