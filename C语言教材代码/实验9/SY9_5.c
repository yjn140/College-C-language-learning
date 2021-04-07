#include <stdio.h>
#define N 4
void saddle_point(int a[][N])
{
	int flag = 0, i, j, max, min;
	for (i = 0; i < N; i++)
	{
		max = 0; /*找第i行中最大值所在下标max*/
		for (j = 0; j < N; j++)
			if (a[i][j] > a[i][max])
				max = j;
		min = 0; /*找第max列中最小值所在下标min*/
		for (j = 0; j < N; j++)
			if (a[j][max] < a[min][max])
				min = j;
		if (min == i)
		{
			flag = 1;
			break;
		} /*找鞍点，当flag=1，表示找到了鞍点，当flag=0，表示未找到鞍点*/
	}
	if (flag == 1) /*根据flag值输出结果*/
		printf("Saddle point is:a[%d][%d]=%d\n", min, max, a[min][max]);
	else
		printf("No\n");
}
int main()
{
	int i, j, a[N][N];
	printf("Enter %d integers :\n", N * N); /*输入一个n阶方阵，存储在数组a中*/
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	saddle_point(a);
	return 0;
}
