#include <stdio.h>
int main()
{
	int a, b, c, temp;			 /* 定义4个变量 */
	printf("Enter a,b,c=");		 /* 输出提示 */
	scanf("%d%d%d", &a, &b, &c); /* 输入3个变量的值 */
	temp = a;
	a = b;
	b = c;
	c = temp;
	printf("a=%d b=%d c=%d\n", a, b, c); /* 输出处理后的数据 */
	return 0;
}
