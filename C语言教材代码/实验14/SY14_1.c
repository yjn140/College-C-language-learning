struct student /* 定义学生信息结构 */
{
	int num;
	char name[20];
	int score;
};
#include <stdio.h>
int main()
{
	int i;
	double sum = 0;
	struct student s[5]; /* 定义结构数组，用于存放5个学生的信息 */
	printf("Input 5 student’s information:\n");
	for (i = 1; i < 6; i++)
	{
		scanf("%d%s%d", &s[i].num, s[i].name, &s[i].score); /* 输入学生信息 */
		sum += s[i].score;									/* 求总分 */
	}
	printf("The average score is %f.\n", sum / 5);
	return 0;
}