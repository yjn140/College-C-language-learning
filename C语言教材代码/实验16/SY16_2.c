#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x, sum = 0, n = 0, aver;
	FILE *fp;										/*�����ļ�ָ��*/
	if ((fp = fopen("d:\\score.txt", "w")) == NULL) /*��д�ķ�ʽ���ļ�score.txt*/
	{
		printf("File open error!\n");
		exit(1);
	}
	printf("x=");
	scanf("%d", &x);
	while (x != -1)
	{
		fprintf(fp, "%3d", x); /*дһ���������ļ���*/
		printf("x=");
		scanf("%d", &x);
	}
	if (fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	if ((fp = fopen("d:\\score.txt", "r")) == NULL) /*�Զ��ķ�ʽ���ļ�score.txt*/
	{
		printf("File open error!\n");
		exit(1);
	}
	while (fscanf(fp, "%d", &x) != EOF) /*���ļ��ж������еķ���*/
	{
		sum += x;
		n++;
	}
	if (fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	aver = sum / n;
	printf("aver=%d", aver);
	return 0;
}
