#include <stdio.h>
int main()
{
	int a, b, c, d, temp;
	printf("Enter a,b,c,d=");
	scanf("%d,%d,%c,%d", &a, &b, &c, &d);
	temp = a;
	a = d;
	d = temp;
	temp = b;
	b = c;
	c = temp;
	printf("%4d,%4d,%4d,%4d\n", a, b, c, d);
	return0;
}