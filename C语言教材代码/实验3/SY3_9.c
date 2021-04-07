#include <stdio.h>
int main()
{
	char c;
	printf("请输入一个大写字母：");
	scan("%c", &c);
	printf("小写字母为：%c\n", c + 32);
	return 0;
}
