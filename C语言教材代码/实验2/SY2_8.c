#include <stdio.h>
int main()
{
	char c1, c2;
	c1 = 'A';
	c2 = 'b';
	c1 = c1 + 32; /* ת��ΪСд��ĸ */
	c2 = c2 - 32; /* ת��Ϊ��д��ĸ */
	printf("%c,%c\n", c1, c2);
	printf("%d,%d\n", c1, c2);
	return 0;
}
