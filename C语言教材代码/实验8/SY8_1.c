#include <stdio.h>
#define N 10
int main()
{
	int i, j, k = 0, t, d, a[N];
	long n, m = 0;
	printf("Please enter a long integer.");
	scanf("%ld", &n);
	while (n > 0) /* 依次取出每位数，并将偶数存入数组 */
	{
		t = n % 10;		/* 取出一位数 */
		if (t % 2 == 0) /* 判断是否偶数 */
			a[k++] = t; /* 将偶数存入数组 */
		n /= 10;		/* 为取下一位数做准备 */
	}
	for (i = 0; i < k - 1; i++) /* 对取出的偶数进行降序排序，共k-1轮 */
	{
		d = i; /* 记录每轮起始元素的下标 */
		for (j = i + 1; j < k; j++)
			if (a[j] > a[d]) /* 后续元素依次与起始元素进行比较 */
				d = j;		 /* 记录比起始元素大的元素的下标 */
		if (d != i)			 /* 一轮比较后判断记录的下标是否发生了变化 */
		{
			t = a[d];
			a[d] = a[i];
			a[i] = t;
		} /* 若发生了变化，则交换元素值 */
	}
	for (i = 0; i < k; i++) /* 将排序后的偶数组合成一个最大数 */
		m = m * 10 + a[i];
	printf("max=%ld", m);
	return 0;
}
