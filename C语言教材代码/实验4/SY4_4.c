#include <stdio.h>
int main()
{
	int score;
	char grade;
	printf("������һ��������");
	scanf("%d", &score);
	if (score >= 90)
		grade = 'A'; /* 90�����ϵĳɼ����ΪA */
	else if (score >= 75)
		grade = 'B'; /* 75��89��֮��ĳɼ����ΪB */
	else if (score >= 60)
		grade = 'C'; /* 60��74��֮��ĳɼ����ΪC */
	else
		grade = 'D'; /* ������ĳɼ����ΪD */
	printf("%d,%d\n", score, grade);
	return 0;
}
