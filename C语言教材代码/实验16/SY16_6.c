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
	if ((fp = fopen("score.dat", "wb+")) == NULL)
	{
		printf("File open error!\n");
		exit(1);
	}
	for (k = 0; k < 5; k++)
	{
		printf("Information of the %dst student:\nnumber:", k + 1);
		scanf("%ld", &student.num);
		printf("score:");
		scanf("%f", &student.mark);
		fwrite(&student, sizeof(struct stu), 1, fp);
	}
	if (fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	return 0;
}