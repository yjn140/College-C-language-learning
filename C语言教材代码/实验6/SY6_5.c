#include <stdio.h>
#define EPS 1e-8 /* 定义误差常量 */
int main()
{
	double e = 1, fact = 1; /* 累加、累乘变量赋初值 */
	long n = 0;
	do
	{
		n++;
		fact = fact * n; /* 累乘计算阶乘 */
		e = e + 1 / fact;
	} while (1 / fact > EPS); /* 条件满足时循环 */
	printf("e=%0.8f\n", e);
	return 0;
}
