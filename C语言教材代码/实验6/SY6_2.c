#include <stdio.h>
int main()
{
	int n, i;
	double sum = 0, product = 1; /* ��������������ֵ */
	printf("Input n:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		product = product * i; /* ����׳� */
		sum = sum + product;   /* �ۼ�һ�� */
	}
	printf("sum=%lf\n", sum);
	return 0;
}
