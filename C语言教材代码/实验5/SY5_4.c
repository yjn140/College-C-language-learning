#include <stdio.h>
int main()
{
	int a, b, c, t;
	printf("Please input 3 integer:");
	scanf("%d,%d,%d", &a, &b, &c);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	} /* ʹa>b */
	if (b > c)
		printf("%d\t%d\t%d\n", a, b, c); /* �ɴ�С���a��b��c */
	else if (c > a)
		printf("%d\t%d\t%d\n", c, a, b); /* �ɴ�С���c��a��b */
	else
		printf("%d\t%d\t%d\n", a, c, b); /* �ɴ�С���a��c��b  */
	return 0;
}
