#include <stdio.h>
#define N 10
int main()
{
	int a[N], i, x;
	printf("输入%d个整数：", N); /* 输出提示 */
	for (i = 0; i <= N - 1; i++)
		scanf("%d", &a[i]);
	printf("输入要找的数x：");
	scanf("%d", &x); /* 输入要找的数x */
	for (i = 0; i <= N - 1 && a[i] != x; i++)
		;		/* 在数组中查找x */
	if (i >= N) /* 条件若成立，则不存在x */
		printf("未找到\n");
	else
		printf("找到了，是第%d个数\n", i + 1);
	return 0;
}
