#include <stdio.h>
int main()
{
	float a, b, c, t; /* ����3��������tΪ�м���� */
	scanf("%f,%f,%f", &a, &b, &c);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	} /* ʹaС��b */
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	} /* ʹaС��c */
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	} /* ʹbС��c */
	printf("%5.2f,%5.2f,%5.2f\n", a, b, c);
	return 0;
}
