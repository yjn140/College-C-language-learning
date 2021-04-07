#include <stdio.h>
int main()
{
	int yang(int x, int y);
	int i, j, k;
	for (i = 1; i <= 10; i++) /*控制输出10行*/
	{
		for (j = 0; j < 30 - 2 * i; j++) /*控制输出空格的数目*/
			printf(" ");
		for (k = 1; k <= i; k++)	   /*控制输出每行的个数*/
			printf("%4d", yang(i, k)); /*调用递归函数以每个数占4格的方式输出*/
		printf("\n");				   /*换行*/
	}
	return 0;
}
int yang(int x, int y)
{
	int z;
	if (y == 1 || y == x) /*如果是第一列或对角的位置*/
		z = 1;
	else
		z = yang(x - 1, y - 1) + yang(x - 1, y); /*该数为上一行前一列与本列数之和*/
	return z;
}
