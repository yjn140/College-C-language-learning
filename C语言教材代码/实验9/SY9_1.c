#include <stdio.h>
//#include<string.h>
int main()
{
	char s[10];
	int i, j, n;
	printf("Please enter a string:");
	gets(s); /*输入字符串*/
	for (n = 0; s[n] != '\0'; n++)
		; /*取字符串的长度*/
	for (i = 0, j = n - 1; i < j; i++, j--)
		if (s[i] != s[j]) /*对应的字符不相等时跳出循环*/
			break;
	if (i < j) /*若是从循环体中跳出来的则不是回文*/
		printf("No\n");
	else
		printf("Yes\n");
	return 0;
}
