#include <stdio.h>
#define EPS 1e-8 /* �������� */
int main()
{
	double e = 1, fact = 1; /* �ۼӡ��۳˱�������ֵ */
	long n = 0;
	do
	{
		n++;
		fact = fact * n; /* �۳˼���׳� */
		e = e + 1 / fact;
	} while (1 / fact > EPS); /* ��������ʱѭ�� */
	printf("e=%0.8f\n", e);
	return 0;
}
