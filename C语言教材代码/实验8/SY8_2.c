#include <stdio.h>
int main()
{
	int i, j, a[1000], k = 0, m, n, flag = 0;
	for (i = 7; i < 2000; i += 2)
	{
		for (j = 2; j <= i / 2; j++) /* ��2��i/2֮����i������ */
			if (i % j == 0)
				break;	/* ���ҵ�һ�����ӣ����˳���ǰѭ�� */
		if (j > i / 2)	/* ��������������û������ */
			a[k++] = i; /* ������i�������� */
	}
	for (i = 0; i < k - 1; i++)
		for (j = 1; j < k; j++)
			if (a[j] - a[i] == 1898) /* ���������������ҵ����ϵ��� */
			{
				m = i;
				n = j;
				flag = 1; /* ��־��Ϊ1����ʾ�ҵ� */
				break;
			}
	if (flag)
		printf("%d-%d=%d", a[n], a[m], a[n] - a[m]);
	else
		printf("not found!");
	return 0;
}
