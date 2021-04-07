#include <stdio.h>
void judge(int b[], int n) /* 函数首部，形参a为数组，n为简单变量 */
{
	int i, j, k, temp;
	for (i = 0, j = n - 1; i < j;)
	{
		if (b[i] % 2 != 0) /* 若是奇数，则将其移到右部 */
		{
			temp = b[i];
			for (k = i; k < j; k++)
				b[k] = b[k + 1];
			b[j] = temp;
			j--; /* 奇数移到右部后，将下标-1 */
		}
		else
			i++; /* 若是偶数，则将下标+1 */
	}
}
int main()
{
	int a[10] = {21, 34, 224, 25, 367, 41, 736, 37, 42, 456}, i;
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	judge(a, 10); /* 调用函数重新排列 */
	printf("\n");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	return 0;
}
