#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	char str[][8] = {"one", "two", "three", "four", "five"}, w[8];
	FILE *fp;
	if ((fp = fopen("text.dat", "wb")) == NULL) /* д�����Ʒ�ʽ���ļ� */
	{
		printf("File open error!\n");
		exit(1);
	}
	while (i < 5)
	{
		fwrite(str[i], sizeof(str[i]), 1, fp); /* д��һ���ַ��� */
		i++;
	}
	if (fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	if ((fp = fopen("text.dat", "rb")) == NULL) /* ����ʽ���ļ� */
	{
		printf("File open error!\n");
		exit(1);
	}
	fread(w, sizeof(w), 1, fp);
	while (!feof(fp))
	{
		printf("%s\n", w);			/* ���ַ����������Ļ */
		fread(w, sizeof(w), 1, fp); /* ��һ���ַ�����w���� */
	}
	if (fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	return 0;
}