#include <stdio.h>
struct node
{
	int x, *y;
};
int main()
{
	int a[][3] = {{18, 15, 12}, {32, 11, 22}, {21, 24, 19}, {47, 29, 31}}, i, j, k, *p;
	struct node stru[4] = {0}, t;
	printf("Before sorting:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	for (i = 0; i < 4; i++)
	{
		stru[i].y = a[i];
		stru[i].x = a[i][0];
	}
	for (i = 0; i < 3; i++)
	{
		k = i;
		for (j = i + 1; j < 4; j++)
			if (stru[j].x > stru[k].x)
				k = j;
		if (k != i)
		{
			t = stru[i];
			stru[i] = stru[k];
			stru[k] = t;
		}
	}
	printf("After sorting:");
	for (i = 0; i < 4; i++)
	{
		p = stru[i].y;
		printf("\n");
		for (j = 0; j < 3; j++)
			printf("%3d", *(p + j));
	}
	return 0;
}