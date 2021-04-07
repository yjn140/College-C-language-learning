#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	char *week[] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"}, *w[7];
	FILE *fp;
	if ((fp = fopen("week.txt", "w")) == NULL)
	{
		printf("File open error!\n");
		exit(1);
	}
	clrscr();
	for (i = 0; i < 7; i++)
		fputs(week[i], fp);
	if (fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	if ((fp = fopen("week.txt", "r")) == NULL)
	{
		printf("File open error!\n");
		exit(1);
	}
	i = 0;
	while (fgets(w[i], strlen(week[i]) + 1, fp) != NULL)
		puts(w[i++]);
	if (fclose(fp))
	{
		printf("Can not close the file!\n");
		exit(1);
	}
	return 0;
}
