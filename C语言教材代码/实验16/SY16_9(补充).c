/*本程序从文件中读出学生数据，然后按成绩降序排序后输出*/
#include <stdio.h>
struct stu
{
	long num;
	float mark;
} s[5], t;
int main()
{
	int i, j, k;
	FILE *fp;
	if ((fp = fopen("score.dat", "rb")) == NULL)
	{
		printf("File open error!\n");
		exit(1);
	}
	clrscr();
	printf("Before sorting:\n");
	for (k = 0; k < 5; k++)
	{
		fread(&s[k], sizeof(struct stu), 1, fp);
		printf("number:%ld,  score:%f\n", s[k].num, s[k].mark);
	}
	for (i = 0; i < 4; i++)
	{
		k = i;
		for (j = i + 1; j < 5; j++)
			if (s[j].mark > s[k].mark)
				k = j;
		if (k != i)
		{
			t = s[i];
			s[i] = s[k];
			s[k] = t;
		}
	}
	printf("After sorting:\n");
	for (k = 0; k < 5; k++)
		printf("number:%ld,   score:%f\n", s[k].num, s[k].mark);
	if (fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	return 0;
}