#include <stdio.h>
int main()
{
	float score;
	printf("Please input score:");		  /* 输出一个提示 */
	scanf("%f", &score);				  /* 键盘输入成绩 */
	if (score < 0 || score > 100)		  /* 判断成绩输入是否正确 */
		printf("This score is error.\n"); /* 成绩小于0或大于100时，提示错误 */
	else
		switch ((int)score / 10)
		{
		case 0: /* (int)score/10的值为0~4时均为空语句 */
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Fail\n");
			break; /* 成绩低于60分时，输出Fail */
		case 6:
			printf("Pass\n");
			break; /* 成绩在60~69分时，输出Pass */
		case 7:
		case 8:
			printf("Good\n");
			break; /* 成绩在70~89分时，输出Good */
		case 9:
		case 10:
			printf("Excellent\n"); /* 成绩在90~100分时，输出Excellent */
		}
	return 0;
}
