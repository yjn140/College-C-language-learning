#include <stdio.h>
struct stu
{
	long num;
	float mark;
} int main()
{
	int k;
	struct stu student;
	FILE *fp;
	if ((fp = fopen("score.dat", "rb+")) == NULL)
	{
		printf("File open error!\n");
		exit(1);
	}
	for (k = 0; k < 5; k++)
	{
		fread(&student, sizeof(struct stu), 1, fp);
		if (student.mark >= 70.0 && student.mark < 80.0)
			printf("number:%ld,  score:%f\n", student.num, student.mark);
	}
	if (fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	return 0;
}