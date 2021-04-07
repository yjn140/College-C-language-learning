#include <stdio.h>
#include <math.h>
int main()
{
	float x, y;
	scan("%f", &x);
	if (x >= 0)
		y = sqrt(x);
	else
		y = pow(x, 5) + 2 * x + 1 / x;
	printf("x=%.2f,y=%.2f\n", x, y);
	return 0;
}
