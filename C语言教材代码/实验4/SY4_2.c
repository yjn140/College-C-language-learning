#include <stdio.h>
int main()
{
	float a, b, c, t; /* 定义3个变量，t为中间变量 */
	scanf("%f,%f,%f", &a, &b, &c);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	} /* 使a小于b */
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	} /* 使a小于c */
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	} /* 使b小于c */
	printf("%5.2f,%5.2f,%5.2f\n", a, b, c);
	return 0;
}
