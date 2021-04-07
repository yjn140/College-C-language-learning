#include <stdio.h>
int main()
{
	int i, count;
	char str[80], ch;
	printf("Enter a string:");
	i = 0;
	while ((str[i] = getchar()) != '\n')
		i++;
	str[i] = '\0'; /*将结束符'\0'存入数组*/
	/*输入一个字符到ch中*/
	printf("Enter a charactor:");
	ch = getchar();
	/*求字符串str中ch字符出现的次数*/
	for (count = 0, i = 0; str[i] != '\0'; i++)
		if (str[i] == ch)
			count++;
	printf("count=%d\n", count);
	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
	printf("\n");
	return 0;
}
