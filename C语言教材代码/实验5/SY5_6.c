#include <stdio.h>
int main()
{
	char c1, c2;
	printf("\nPlease input a character:");
	c1 = getchar();
	if (c1 >= 'a' && c1 <= 'z') /* �ж��Ƿ�Сд��ĸ */
		c2 = c1 - 32;
	else if (c1 >= 'A' && c1 <= 'Z') /* �ж��Ƿ��д��ĸ */
		c2 = c1 + 32;
	else
		c2 = c1 + 1; /* ת��Ϊ��һ���ַ� */
	putchar(c2);
	return 0;
}
