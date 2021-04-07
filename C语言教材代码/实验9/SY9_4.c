#include <stdio.h>
int main()
{
	int i, j, a[4][5];
	printf("Please enter array:\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			scanf("%d", &a[i][j]);
	printf("\nArray:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	for (i = 0; i < 3; i++)
		a[i][4] = 0;
	for (j = 0; j < 5; j++)
		a[3][j] = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
		{
			a[i][4] += a[i][j];
			a[3][j] += a[i][j];
			a[3][4] += a[i][j];
		}
	printf("The sum of columnrow:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	return 0;
}
