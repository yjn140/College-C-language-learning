#include <stdio.h>
int main()
{
	char ch;
	int letters = 0, space = 0, digit = 0, others = 0;
	printf("Please input some characters:");
	while ((ch = getchar()) != '\n') /* ����ǻس��ַ�ʱѭ�� */
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			letters++; /* ��ĸ��������1 */
		else if (ch == ' ')
			space++; /* �ո��������1 */
		else if (ch >= '0' && ch <= '9')
			digit++; /* ���ּ�������1 */
		else
			others++; /* �����ַ���������1 */
	}
	printf("letters=%d,space=%d\n", letters, space);
	printf("digit=%d,others=%d\n", digit, others);
	return 0;
}
