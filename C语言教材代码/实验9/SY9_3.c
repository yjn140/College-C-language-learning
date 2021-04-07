#include <stdio.h>
//#include<string.h>
int main()
{
	char string[10] = {'\0'}, ch;
	int i = 0, j, len;
	printf("Please enter a string(lower):");
	gets(string); /*输入字符串*/
	printf("Please enter a letter:");
	ch = getchar();
	while (string[i] != '\0' && ch > string[i]) /*查找字符在字符串中的位置*/
		i++;
	for (len = 0; string[len] != '\0'; len++)
		;
	if (i <= len - 1) /*如果插入位置是字符串之间*/
		for (j = len - 1; j >= i; j--)
			string[j + 1] = string[j];
	string[i] = ch; /*插入字符*/
	printf("Inserted after:");
	puts(string);
	return 0;
}
