#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int prime(int n) /* �ж��������� */
{
	int k, i;
	k = sqrt(n);
	for (i = 2; i <= k; i++)
		if (n % i == 0)
			return 0;
	return 1;
}
void move(int *b, int n) /* �ƶ����� */
{
	int i, j = 0, k, t;
	for (i = 0; i < n; i++)
		if (prime(b[i]))
		{
			t = b[i];					 /* ��������t�� */
			for (k = i - 1; k >= j; k--) /* ��������λ */
				b[k + 1] = b[k];
			b[j] = t; /* ���������ڳ���λ�� */
			j++;
		}
}
int main()
{
	int score[10] = {63, 71, 68, 83, 58, 91, 69, 82, 87, 77}, i;
	FILE *fp;
	printf("Before moving:\n");
	for (i = 0; i < 10; i++) /* ����ƶ�ǰ������ */
		printf("%3d", score[i]);
	printf("\n");
	if ((fp = fopen("d:\\myf.out", "w")) == NULL) /* д��ʽ���ļ� */
	{
		printf("File open error!\n");
		exit(1);
	}
	move(score, 10); /* �����ƶ����� */
	printf("After moving:\n");
	for (i = 0; i < 10; i++) /* ����ƶ�������� */
		printf(fp, "%3d", score[i]);
	printf("\n");
	for (i = 0; i < 10; i++) /* д���ļ��� */
		fprintf("%3d", score[i]);
	fprintf(fp, "\n");							  /* д�뻻�з� */
	fprintf(fp, "The class number is:1234567\n"); /* д���� */
	if (fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	return 0;
}
