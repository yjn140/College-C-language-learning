#include <stdio.h>
//#include<string.h>
int main()
{
	char s[10];
	int i, j, n;
	printf("Please enter a string:");
	gets(s); /*�����ַ���*/
	for (n = 0; s[n] != '\0'; n++)
		; /*ȡ�ַ����ĳ���*/
	for (i = 0, j = n - 1; i < j; i++, j--)
		if (s[i] != s[j]) /*��Ӧ���ַ������ʱ����ѭ��*/
			break;
	if (i < j) /*���Ǵ�ѭ�����������������ǻ���*/
		printf("No\n");
	else
		printf("Yes\n");
	return 0;
}
