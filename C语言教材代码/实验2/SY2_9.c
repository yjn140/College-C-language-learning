#include <stdio.h>
int main()
{
	int x, y;
	x = 50;
	y = (x = x - 5, x / 5);
	printf("y=%d\n", y);
	return 0;
}
