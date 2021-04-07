#include <stdio.h>
int main()
{
	int i, j, t, n, a[11] = {12, 31, 5, 7, 19, 4, 8, 16, 32, 42};
	for (i = 0; i < 10; i++)
		for (j = i + 1; j <= 10; j++)
			if (a[i] < a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	printf("Inserted before:");
	for (i = 0; i < 10; i++)
		printf("%3d", a[i]);
	printf("\nPlease enter a number:");
	scanf("%d", &n);
	for (i = 0; i < 10; i++)
		if (a[i] < n)
		{
			for (j = 9; j >= i; j--)
				a[j + 1] = a[j];
			break;
		}
	a[i] = n;
	printf("Inserted after:");
	for (i = 0; i <= 10; i++)
		printf("%3d", a[i]);
	printf("\n");
	return 0;
}
