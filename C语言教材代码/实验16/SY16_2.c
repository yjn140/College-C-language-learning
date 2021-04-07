#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x, sum = 0, n = 0, aver;
	FILE *fp;										/*定义文件指针*/
	if ((fp = fopen("d:\\score.txt", "w")) == NULL) /*以写的方式打开文件score.txt*/
	{
		printf("File open error!\n");
		exit(1);
	}
	printf("x=");
	scanf("%d", &x);
	while (x != -1)
	{
		fprintf(fp, "%3d", x); /*写一个分数到文件中*/
		printf("x=");
		scanf("%d", &x);
	}
	if (fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	if ((fp = fopen("d:\\score.txt", "r")) == NULL) /*以读的方式打开文件score.txt*/
	{
		printf("File open error!\n");
		exit(1);
	}
	while (fscanf(fp, "%d", &x) != EOF) /*从文件中读出所有的分数*/
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
