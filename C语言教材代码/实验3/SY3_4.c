#include <stdio.h>
int main()
{
	float x = 7.12;
	int a = 5, b;
	b = (int)x % a; /* 将单精度变量x强制转换为整型，其与变量a的余数赋给变量b */
	printf("b=%d\n", b);
	printf("x=%f\n", x);
}
