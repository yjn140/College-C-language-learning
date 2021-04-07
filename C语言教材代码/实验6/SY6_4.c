#include <stdio.h>
int main()
{
	char ch;
	int letters = 0, space = 0, digit = 0, others = 0;
	printf("Please input some characters:");
	while ((ch = getchar()) != '\n') /* 输入非回车字符时循环 */
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			letters++; /* 字母计数器加1 */
		else if (ch == ' ')
			space++; /* 空格计数器加1 */
		else if (ch >= '0' && ch <= '9')
			digit++; /* 数字计数器加1 */
		else
			others++; /* 其他字符计数器加1 */
	}
	printf("letters=%d,space=%d\n", letters, space);
	printf("digit=%d,others=%d\n", digit, others);
	return 0;
}
