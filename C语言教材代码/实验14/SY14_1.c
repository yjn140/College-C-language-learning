struct student /* ����ѧ����Ϣ�ṹ */
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
	struct student s[5]; /* ����ṹ���飬���ڴ��5��ѧ������Ϣ */
	printf("Input 5 student��s information:\n");
	for (i = 1; i < 6; i++)
	{
		scanf("%d%s%d", &s[i].num, s[i].name, &s[i].score); /* ����ѧ����Ϣ */
		sum += s[i].score;									/* ���ܷ� */
	}
	printf("The average score is %f.\n", sum / 5);
	return 0;
}