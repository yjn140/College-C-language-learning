#include <stdio.h>
int main()
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		j = i * 10 + 6;	   /* 生成个位为6的数 */
		if (j % 3 != 0)	   /* 判断是否能被3整除 */
			continue;	   /* 不能整除，则继续 */
		printf("%d\n", j); /* 输出满足条件的数 */
	}
	return 0;
}
