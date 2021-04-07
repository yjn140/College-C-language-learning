#include <stdio.h>
int prime(int m)
{
	int i;
	for (i = 2; i < m - 1; i++) /*找2～m-1之间能整出m的数*/
		if (m % i == 0)
			return (0);
	return (1); /*返回1，表示m是素数*/
}
int main()
{
	int i, n, k = 0;
	printf("Enter a integer:");
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
		if (prime(i)) /*调用函数判断i是否素数*/
		{
			printf("%-4d", i);
			k++;
			if (k % 3 == 0) /*控制每行输出3个*/
				printf("\n");
		}
	return 0;
}
