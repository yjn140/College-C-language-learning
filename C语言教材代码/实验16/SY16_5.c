#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int prime(int n) /* 判断素数函数 */
{
	int k, i;
	k = sqrt(n);
	for (i = 2; i <= k; i++)
		if (n % i == 0)
			return 0;
	return 1;
}
void move(int *b, int n) /* 移动素数 */
{
	int i, j = 0, k, t;
	for (i = 0; i < n; i++)
		if (prime(b[i]))
		{
			t = b[i];					 /* 素数存入t中 */
			for (k = i - 1; k >= j; k--) /* 非素数移位 */
				b[k + 1] = b[k];
			b[j] = t; /* 素数放入腾出的位置 */
			j++;
		}
}
int main()
{
	int score[10] = {63, 71, 68, 83, 58, 91, 69, 82, 87, 77}, i;
	FILE *fp;
	printf("Before moving:\n");
	for (i = 0; i < 10; i++) /* 输出移动前的数组 */
		printf("%3d", score[i]);
	printf("\n");
	if ((fp = fopen("d:\\myf.out", "w")) == NULL) /* 写方式打开文件 */
	{
		printf("File open error!\n");
		exit(1);
	}
	move(score, 10); /* 调用移动函数 */
	printf("After moving:\n");
	for (i = 0; i < 10; i++) /* 输出移动后的数组 */
		printf(fp, "%3d", score[i]);
	printf("\n");
	for (i = 0; i < 10; i++) /* 写入文件中 */
		fprintf("%3d", score[i]);
	fprintf(fp, "\n");							  /* 写入换行符 */
	fprintf(fp, "The class number is:1234567\n"); /* 写入班号 */
	if (fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	return 0;
}
