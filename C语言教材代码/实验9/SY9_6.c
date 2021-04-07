#include <stdio.h>
int main()
{
	int i, j;
	char str[80];
	/*输入一个以回车结束的字符串*/
	printf("Enter a string:");
	i = 0;
	while ((str[i] = getchar()) != '\n')
		i++;
	str[i] = '\0'; /*将结束符’\0’存入数组*/
				   /*逆序输出字符串str中的字符*/
	for (j = i - 1; j >= 0; j--)
		putchar(str[j]);
	printf("\n");
	return 0;
}
