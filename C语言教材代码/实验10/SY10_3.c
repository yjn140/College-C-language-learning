#include <stdio.h>
int prime(int m)
{
	int i;
	for (i = 2; i < m - 1; i++) /*��2��m-1֮��������m����*/
		if (m % i == 0)
			return (0);
	return (1); /*����1����ʾm������*/
}
int main()
{
	int i, n, k = 0;
	printf("Enter a integer:");
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
		if (prime(i)) /*���ú����ж�i�Ƿ�����*/
		{
			printf("%-4d", i);
			k++;
			if (k % 3 == 0) /*����ÿ�����3��*/
				printf("\n");
		}
	return 0;
}
