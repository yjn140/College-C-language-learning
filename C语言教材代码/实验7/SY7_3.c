#include <stdio.h>
int main()
{
	int i, n, m, nx;
	for (n = 1000; n < 10000; n++)
	{
		m = n; /* ����n��ֵ�浽����m�� */
		nx = 0;
		for (i = 0; i < 4; i++)
		{
			nx = nx * 10 + m % 10; /* ���������� */
			m /= 10;
		}
		if (n * 9 == nx) /* ����������ԭ����9�� */
			printf("%8d-->%8d\n", n, nx);
	}
	return 0;
}
