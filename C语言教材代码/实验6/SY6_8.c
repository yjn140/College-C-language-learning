#include <stdio.h>
int main()
{
	int num, n;
	float score, total = 0;
	num = 0;
	n = 1;
	printf("Please input score #%d(0~100):", n);
	scanf("%f", &score);
	for (; score >= 0; n++) /* �ɼ����ڵ���0ʱѭ�� */
	{
		if (score < 60)
			num++;										 /* ͳ�Ʋ���������� */
		total = total + score;							 /* �ۼ��ܷ� */
		printf("Please input score #%d(0~100):", n + 1); /* ��ʾ������һ�� */
		scanf("%f", &score);
	}
	printf("The average score is %.2f.\n", total / (n - 1)); /* ���ƽ���� */
	printf("The numbers between 0 and 59 is %d.\n", num);	 /* ������������� */
	return 0;
}