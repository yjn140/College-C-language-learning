#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	char ch;
	FILE *fp;									  /* �����ļ�ָ�� */
	if ((fp = fopen("d:\\asc.txt", "w")) == NULL) /* ��д��ʽ���ļ�asc.txt */
	{
		printf("File open error!\n");
		exit(1);
	}
	for (i = 0; i <= 25; i++)
	{
		ch = 'A' + i;  /* ���ɴ�д��ĸ */
		fputc(ch, fp); /* д���ļ� */
	}
	if (fclose(fp)) /* �ر��ļ� */
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	if ((fp = fopen("d:\\asc.txt", "r")) == NULL) /* �Զ���ʽ�ٴδ��ļ�asc.txt */
	{
		printf("File open error!\n");
		exit(1);
	}
	for (i = 0; i <= 25; i++)
	{
		ch = fgetc(fp) + 32; /* ת����Сд��ĸ */
		putchar(ch);
	}
	if (fclose(fp)) /* �ٴιر��ļ� */
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	return 0;
}
