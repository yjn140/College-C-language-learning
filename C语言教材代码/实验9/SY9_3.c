#include <stdio.h>
//#include<string.h>
int main()
{
	char string[10] = {'\0'}, ch;
	int i = 0, j, len;
	printf("Please enter a string(lower):");
	gets(string); /*�����ַ���*/
	printf("Please enter a letter:");
	ch = getchar();
	while (string[i] != '\0' && ch > string[i]) /*�����ַ����ַ����е�λ��*/
		i++;
	for (len = 0; string[len] != '\0'; len++)
		;
	if (i <= len - 1) /*�������λ�����ַ���֮��*/
		for (j = len - 1; j >= i; j--)
			string[j + 1] = string[j];
	string[i] = ch; /*�����ַ�*/
	printf("Inserted after:");
	puts(string);
	return 0;
}
