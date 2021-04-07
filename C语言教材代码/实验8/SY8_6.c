#include <stdio.h>
#define N 10
int main()
{
	int i, temp, a[N] = {12, 3, 11, 14, 21, 15, 25, 18, 22, 27};
	printf("Exchange before:\n");
	for (i = 0; i < N; i++)
		printf("%3d", a[i]);
	printf("Exchange after:\n");
	for (i = 0; i < N / 2; i++)
	{
		temp = a[i];
		a[i] = a[N - i - 1];
		a[N - i - 1] = temp;
	}
	for (i = 0; i < N; i++)
		printf("%3d", a[i]);
	return 0;
}
