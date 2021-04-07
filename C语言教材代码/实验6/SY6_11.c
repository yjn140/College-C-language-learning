#include <stdio.h>
#include <math.h>
#define EPS 1e-8
int main()
{
	int n;
	float x, y, t, p;
	printf("Please input x:");
	scanf("%f", &x);
	t = 1;
	p = 1;
	y = 1;
	n = 1;
	do
	{
		p = -p * x;
		t *= n;
		y = y + p / t;
		n++;
	} while (fabs(p / t) > EPS);
	printf("f(%f)=%0.8f\n", x, y);
	return 0;
}
