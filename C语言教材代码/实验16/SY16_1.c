#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	char ch;
	FILE *fp;									  /* 定义文件指针 */
	if ((fp = fopen("d:\\asc.txt", "w")) == NULL) /* 以写方式打开文件asc.txt */
	{
		printf("File open error!\n");
		exit(1);
	}
	for (i = 0; i <= 25; i++)
	{
		ch = 'A' + i;  /* 生成大写字母 */
		fputc(ch, fp); /* 写入文件 */
	}
	if (fclose(fp)) /* 关闭文件 */
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	if ((fp = fopen("d:\\asc.txt", "r")) == NULL) /* 以读方式再次打开文件asc.txt */
	{
		printf("File open error!\n");
		exit(1);
	}
	for (i = 0; i <= 25; i++)
	{
		ch = fgetc(fp) + 32; /* 转换成小写字母 */
		putchar(ch);
	}
	if (fclose(fp)) /* 再次关闭文件 */
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	return 0;
}
