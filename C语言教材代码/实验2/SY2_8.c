#include <stdio.h>
int main()
{
	char c1, c2;
	c1 = 'A';
	c2 = 'b';
	c1 = c1 + 32; /* 转换为小写字母 */
	c2 = c2 - 32; /* 转换为大写字母 */
	printf("%c,%c\n", c1, c2);
	printf("%d,%d\n", c1, c2);
	return 0;
}
