#include <stdio.h>
int main()
{
	char c;
	printf("Please input a character:"); /* ���һ����ʾ */
	c = getchar();						 /* ���������ַ� */
	if (c < 32)							 /* ASCII��С��32���ǿ����ַ� */
		printf("This is a control character\n");
	else if (c >= '0' && c <= '9') /* '0'~'9'֮����������ַ� */
		printf("This is a digit\n");
	else if (c >= 'A' && c <= 'Z') /* 'A'~'Z'֮����Ǵ�д��ĸ */
		printf("This is a capital letter\n");
	else if (c >= 'a' && c <= 'z') /* 'a'~'z'֮�����Сд��ĸ */
		printf("This is a small letter\n");
	else
		printf("This ia a other character\n");
	return 0;
}
