#include <stdio.h>
#include <math.h>
int main()
{
	double y;
	float x;
	printf("请输入一个实数：");
	scanf("%f", &x);
	if (x < -2)
		y = log(x); /* 计算y的值 */
	else if (x < pow(5, 1.0 / 3))
		y=sqrt(x+3)+log(5-pow(x,3)）;
	else 
		y=x*x+exp(x);
	printf("y=%0.6f\n",y);
	return 0;
}
