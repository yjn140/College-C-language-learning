#include <stdio.h>
int main()
{
	int i, j, n, a[10][10], sum = 0;
	printf("Enter n:");
	scanf("%d", &n);
	printf("Enter %d integers:\n", n * n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - 1; j++)
			if (i + j != n - 1)
				sum += a[i][j];
	printf("%d\n", sum);
	return 0;
}
