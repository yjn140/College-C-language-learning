#include <stdio.h>
int main()
{
	int m, sum = 0, n = 1; /* �������������ֵ */
	printf("Please input a integer(>1):");
	scanf("%d", &m);
	do
	{
		if (m % n == 0) /* �ж��Ƿ�Ϊ���� */
			sum = sum + n;
		n++;
	} while (n <= m - 1);
	if (m == sum) /* ���������Ϊ���� */
		printf("%d is a complete number.\n", m);
	else
		printf("%d isn't a complete number.\n", m);
	return 0;
}
