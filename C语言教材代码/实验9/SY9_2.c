#include <stdio.h>
#define N 3
void print(int a[][N]) /* �����ά���麯�� */
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%3d", a[i][j]);
		printf("\n"); /* ���һ�к��� */
	}
}
int main()
{
	int i, j, t, a[N][N] = {3, 2, 6, -2, 7, 9, 1, 5, 8};
	printf("Exchange before:\n");
	print(a); /* ������������������ǰ������ */
	printf("\n");
	for (i = 0; i < N; i++) /* �������л��� */
		for (j = i + 1; j < N; j++)
		{
			t = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = t;
		}
	printf("Exchange after:\n");
	print(a); /* ������������������������� */
	return 0;
}
