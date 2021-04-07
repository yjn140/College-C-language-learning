#include <stdio.h>
struct stu
{
	long num;
	float mark;
} s[5];
int main()
{
	int k;
	FILE *fp;
	if ((fp = fopen("score.dat", "rb")) == NULL)
	{
		printf("File open error!\n");
		exit(1);
	}
	for (k = 0; k < 5; k += 2)
	{
		fseek(fp, k * sizeof(struct stu), SEEK_SET);
		fread(&s[k], sizeof(struct stu), 1, fp);
		printf("number:%ld,  score:%f\n", s[k].num, s[k].mark);
	}
	if (fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	return 0;
}