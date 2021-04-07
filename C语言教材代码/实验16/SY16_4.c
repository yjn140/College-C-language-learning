#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	char str[][8] = {"one", "two", "three", "four", "five"}, w[8];
	FILE *fp;
	if ((fp = fopen("text.dat", "wb")) == NULL) /* 写二进制方式打开文件 */
	{
		printf("File open error!\n");
		exit(1);
	}
	while (i < 5)
	{
		fwrite(str[i], sizeof(str[i]), 1, fp); /* 写入一个字符串 */
		i++;
	}
	if (fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	if ((fp = fopen("text.dat", "rb")) == NULL) /* 读方式打开文件 */
	{
		printf("File open error!\n");
		exit(1);
	}
	fread(w, sizeof(w), 1, fp);
	while (!feof(fp))
	{
		printf("%s\n", w);			/* 将字符串输出到屏幕 */
		fread(w, sizeof(w), 1, fp); /* 读一个字符串到w数组 */
	}
	if (fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	return 0;
}