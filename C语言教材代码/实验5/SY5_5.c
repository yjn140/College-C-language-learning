#include <stdio.h>
int main()
{
	float temperature, result; /* 定义温度与结果变量 */
	char type;				   /* 定义运算类型变量 */
	printf("Please input type,temperature data:");
	scanf("%c,%f", &type, &temperature); /* 输入运算类型与温度 */
	if (type == 'f' || type == 'F')
	{
		result = 5 * (temperature - 32) / 9; /* 转换为摄氏温度 */
		printf("The result is %f\n", result);
	}
	else if (type == 'c' || type == 'C')
	{
		result = 9 * temperature / 5 + 32; /* 转换为华氏温度 */
		printf("The result is %f\n", result);
	}
	else
		printf("Input error."); /* 输入错误 */
	return 0;
}
