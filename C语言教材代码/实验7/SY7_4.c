#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, n, m, k, flag;
	for (n = 100; n < 1000; n++)
	{
		flag = 0; /* ��־��0 */
		k = sqrt(n);
		for (i = 2; i <= k; i++) /* �ж��Ƿ�Ϊ���� */
			if (n % i == 0)
			{
				flag = 1; /* ��־��1�������� */
				break;
			}
		if (flag)
			continue; /* �ж���һ���� */
		k = n;
		m = 0;
		while (k > 0) /* ������ */
		{
			m = m * 10 + k % 10;
			k /= 10;
		}
		if (m == n) /* �������㣬����Ҫ�ҵ��� */
		{
			printf("%d\t", n);
			if (++j % 5 == 0)
				printf("\n");
		}
	}
	return 0;
}
