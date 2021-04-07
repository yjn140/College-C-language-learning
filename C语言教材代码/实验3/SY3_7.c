#include <stdio.h>
int main()
{
	float a, h;
	double area;
	printf("Enter a,h=");
	scanf("%f %f", &a, &h);
	area = a * h / 2;
	printf("area=%f\n", area);
	return 0;
}
