#include <stdio.h>
int main()
{
	long n, m, sum, p;
	int i, j = 0, k;
	for (n = 1; n < 200000; n++)
	{
		m = n;
		sum = 0; /* �ۼӺ���0 */
		while (m)
		{
			k = m % 10; /* ȡ��һλ���� */
			p = 1;
			for (i = 2; i <= k; i++) /* ��׳� */
				p *= i;
			sum += p; /* �ۼӽ׳˺� */
			m /= 10;
		}
		if (sum == n) /* �׳˺���ԭ����ȣ����������� */
		{
			printf("%ld\t", n);
			if (++j % 2 == 0)
				printf("\n");
		}
	}
	return 0;
}
