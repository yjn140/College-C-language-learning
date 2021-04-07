#include <stdio.h>
int main()
{
	int num, n;
	float score, total = 0;
	num = 0;
	n = 1;
	printf("Please input score #%d(0~100):", n);
	scanf("%f", &score);
	for (; score >= 0; n++) /* 成绩大于等于0时循环 */
	{
		if (score < 60)
			num++;										 /* 统计不及格的人数 */
		total = total + score;							 /* 累加总分 */
		printf("Please input score #%d(0~100):", n + 1); /* 提示输入下一个 */
		scanf("%f", &score);
	}
	printf("The average score is %.2f.\n", total / (n - 1)); /* 输出平均分 */
	printf("The numbers between 0 and 59 is %d.\n", num);	 /* 输出不及格人数 */
	return 0;
}