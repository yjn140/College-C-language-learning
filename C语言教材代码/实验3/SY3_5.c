#include <stdio.h>
int main()
{
	int a, b;
	a = 8;
	b = 9;
	printf("%d*%d=%d\n", a, a, a * a); /* ���8*8=64 */
	printf("%d*%d=%d\n", a, b, a * b); /* ���8*9=72 */
	return 0;
}
