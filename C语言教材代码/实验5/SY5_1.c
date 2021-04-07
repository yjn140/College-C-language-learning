#include <stdio.h>
int main()
{
	char c;
	printf("Please input a character:"); /* 输出一个提示 */
	c = getchar();						 /* 键盘输入字符 */
	if (c < 32)							 /* ASCII码小于32的是控制字符 */
		printf("This is a control character\n");
	else if (c >= '0' && c <= '9') /* '0'~'9'之间的是数字字符 */
		printf("This is a digit\n");
	else if (c >= 'A' && c <= 'Z') /* 'A'~'Z'之间的是大写字母 */
		printf("This is a capital letter\n");
	else if (c >= 'a' && c <= 'z') /* 'a'~'z'之间的是小写字母 */
		printf("This is a small letter\n");
	else
		printf("This ia a other character\n");
	return 0;
}
