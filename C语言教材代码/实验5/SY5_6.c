#include <stdio.h>
int main()
{
	char c1, c2;
	printf("\nPlease input a character:");
	c1 = getchar();
	if (c1 >= 'a' && c1 <= 'z') /* ÅÐ¶ÏÊÇ·ñÐ¡Ð´×ÖÄ¸ */
		c2 = c1 - 32;
	else if (c1 >= 'A' && c1 <= 'Z') /* ÅÐ¶ÏÊÇ·ñ´óÐ´×ÖÄ¸ */
		c2 = c1 + 32;
	else
		c2 = c1 + 1; /* ×ª»»ÎªÏÂÒ»¸ö×Ö·û */
	putchar(c2);
	return 0;
}
