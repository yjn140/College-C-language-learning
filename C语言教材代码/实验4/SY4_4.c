#include <stdio.h>
int main()
{
	int score;
	char grade;
	printf("请输入一个分数：");
	scanf("%d", &score);
	if (score >= 90)
		grade = 'A'; /* 90分以上的成绩标记为A */
	else if (score >= 75)
		grade = 'B'; /* 75到89分之间的成绩标记为B */
	else if (score >= 60)
		grade = 'C'; /* 60到74分之间的成绩标记为C */
	else
		grade = 'D'; /* 不及格的成绩标记为D */
	printf("%d,%d\n", score, grade);
	return 0;
}
