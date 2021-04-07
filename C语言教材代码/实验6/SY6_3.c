#include <stdio.h>
#include <math.h> /* 引入数学头文件  */
#define EPS 1e-6  /* 定义符号常量  */
int main()
{
	double n = 1, cosx, t;
	float x;
	printf("Please input x:");
	scanf("%f", &x);
	t = 1;
	cosx = 0;
	do
	{
		cosx = cosx + t;						  /* 累加一项 */
		t = -t * x * x / ((2 * n) * (2 * n - 1)); /* 计算下一累加项 */
		n = n + 1;
	} while (fabs(t) > EPS); /* 判断是否满足条件 */
	printf("cos(%f)=%0.8f\n", x, cosx);
	return 0;
}
