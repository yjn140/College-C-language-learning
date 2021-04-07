#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c; /* 定义三个整型变量 */
	float area;	 /* 定义一个单精度实型变量 */
	double s;	 /* 定义一个双精度实型变量 */
	printf("请输入三角形的三条边长：");
	scanf("%d,%d,%d", &a, &b, &c); /* 输入三角形的三条边 */
	s = (a + b + c) / 2.0;
	if (a + b <= c || b + c <= a || a + c <= b) /* 判断能否构成三角形 */
		printf("不构成三角形\n");				/* 输出不能构成三角形的提示 */
	else
	{
		area = sqrt(s * (s - a) * (s - b) * (s - c)); /* 计算三角形的面积 */
		printf("三角形的面积是：%f\n", area);		  /* 输出三角形的面积 */
	}
	return 0;
}
