#include <stdio.h>
#include <math.h> /* ������ѧͷ�ļ�  */
#define EPS 1e-6  /* ������ų���  */
int main()
{
	double n = 1, cosx, t;
	float x;
	printf("Please input x:");
	scanf("%f", &x);
	t = 1;
	cosx = 0;
	do
	{
		cosx = cosx + t;						  /* �ۼ�һ�� */
		t = -t * x * x / ((2 * n) * (2 * n - 1)); /* ������һ�ۼ��� */
		n = n + 1;
	} while (fabs(t) > EPS); /* �ж��Ƿ��������� */
	printf("cos(%f)=%0.8f\n", x, cosx);
	return 0;
}
