#include <stdio.h>
int main()
{
	int i, j;
	char str[80];
	/*����һ���Իس��������ַ���*/
	printf("Enter a string:");
	i = 0;
	while ((str[i] = getchar()) != '\n')
		i++;
	str[i] = '\0'; /*����������\0����������*/
				   /*��������ַ���str�е��ַ�*/
	for (j = i - 1; j >= 0; j--)
		putchar(str[j]);
	printf("\n");
	return 0;
}
