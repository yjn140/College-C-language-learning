#include <stdio.h>
int main()
{
	int i, count;
	char str[80], ch;
	printf("Enter a string:");
	i = 0;
	while ((str[i] = getchar()) != '\n')
		i++;
	str[i] = '\0'; /*��������'\0'��������*/
	/*����һ���ַ���ch��*/
	printf("Enter a charactor:");
	ch = getchar();
	/*���ַ���str��ch�ַ����ֵĴ���*/
	for (count = 0, i = 0; str[i] != '\0'; i++)
		if (str[i] == ch)
			count++;
	printf("count=%d\n", count);
	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
	printf("\n");
	return 0;
}
