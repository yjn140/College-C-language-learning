#include <stdio.h>
int main()
{
	float score;
	printf("Please input score:");		  /* ���һ����ʾ */
	scanf("%f", &score);				  /* ��������ɼ� */
	if (score < 0 || score > 100)		  /* �жϳɼ������Ƿ���ȷ */
		printf("This score is error.\n"); /* �ɼ�С��0�����100ʱ����ʾ���� */
	else
		switch ((int)score / 10)
		{
		case 0: /* (int)score/10��ֵΪ0~4ʱ��Ϊ����� */
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Fail\n");
			break; /* �ɼ�����60��ʱ�����Fail */
		case 6:
			printf("Pass\n");
			break; /* �ɼ���60~69��ʱ�����Pass */
		case 7:
		case 8:
			printf("Good\n");
			break; /* �ɼ���70~89��ʱ�����Good */
		case 9:
		case 10:
			printf("Excellent\n"); /* �ɼ���90~100��ʱ�����Excellent */
		}
	return 0;
}
