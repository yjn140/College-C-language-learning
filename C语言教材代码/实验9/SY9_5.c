#include <stdio.h>
#define N 4
void saddle_point(int a[][N])
{
	int flag = 0, i, j, max, min;
	for (i = 0; i < N; i++)
	{
		max = 0; /*�ҵ�i�������ֵ�����±�max*/
		for (j = 0; j < N; j++)
			if (a[i][j] > a[i][max])
				max = j;
		min = 0; /*�ҵ�max������Сֵ�����±�min*/
		for (j = 0; j < N; j++)
			if (a[j][max] < a[min][max])
				min = j;
		if (min == i)
		{
			flag = 1;
			break;
		} /*�Ұ��㣬��flag=1����ʾ�ҵ��˰��㣬��flag=0����ʾδ�ҵ�����*/
	}
	if (flag == 1) /*����flagֵ������*/
		printf("Saddle point is:a[%d][%d]=%d\n", min, max, a[min][max]);
	else
		printf("No\n");
}
int main()
{
	int i, j, a[N][N];
	printf("Enter %d integers :\n", N * N); /*����һ��n�׷��󣬴洢������a��*/
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
