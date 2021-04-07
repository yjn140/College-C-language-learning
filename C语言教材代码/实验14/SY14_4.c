#include <stdio.h>
#define N 10
struct student
{
	int num;
	char name[20];
	int score;
	char grade;
};
int set_grade(struct student *p);
int main(void)
{
	struct student stu[N], *ptr;
	int i, count;
	ptr = stu;
	printf("Input the student's number, name and score: \n");
	for (i = 0; i < N; i++)
	{
		printf("No %d: ", i + 1); /* ��ʾ�����i��ͬѧ����Ϣ  */
		scanf("%d%s%d", &stu[i].num, stu[i].name, &stu[i].score);
	}
	count = set_grade(ptr);
	printf("The count (<60): %d\n", count);
	printf("The student grade:\n");
	for (i = 0; i < N; i++)
		printf("%d %s %c\n", stu[i].num, stu[i].name, stu[i].grade);
	return 0;
}
int set_grade(struct student *p)
{
	int i, n = 0;
	for (i = 0; i < N; i++, p++)
	{
		if (p->score >= 85)
			p->grade = 'A';
		else if (p->score >= 70)
			p->grade = 'B';
		else if (p->score >= 60)
			p->grade = 'C';
		else
		{
			p->grade = 'D';
			n++;
		}
	}
	return n;
}