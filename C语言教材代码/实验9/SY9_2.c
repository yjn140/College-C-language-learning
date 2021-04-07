#include <stdio.h>
#define N 3
void print(int a[][N]) /* 输出二维数组函数 */
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%3d", a[i][j]);
		printf("\n"); /* 输出一行后换行 */
	}
}
int main()
{
	int i, j, t, a[N][N] = {3, 2, 6, -2, 7, 9, 1, 5, 8};
	printf("Exchange before:\n");
	print(a); /* 调用输出函数输出交换前的数组 */
	printf("\n");
	for (i = 0; i < N; i++) /* 进行行列互换 */
		for (j = i + 1; j < N; j++)
		{
			t = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = t;
		}
	printf("Exchange after:\n");
	print(a); /* 调用输出函数输出交换后的数组 */
	return 0;
}
