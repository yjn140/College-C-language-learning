#include <stdio.h>
int main()
{
	int m, n;
	printf("Please input the data:");
	scanf("%d", &m);
	n = m * m;		  /* ���ɸ�����ƽ���� */
	if (m == n % 100) /* ������������ͬ���� */
		printf("%d and %d is.\n", m, n);
	else
		printf("%d is not.\n", m);
	return 0;
}
