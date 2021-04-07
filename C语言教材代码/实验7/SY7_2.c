#include <stdio.h>
int main()
{
	int i = 4; /* 判断的数由4开始 */
	while (1)  /* 条件始终成立 */
	{
		if ((i % 3 == 2) && (i % 4 == 2) && (i % 5 == 2) && (i % 6 == 2))
		{
			printf("%d\n", i); /* 输出满足条件的最小偶数 */
			break;			   /* 找到后跳出循环 */
		}
		i = i + 2; /* 判断的数加2 */
	}
	return 0;
}
