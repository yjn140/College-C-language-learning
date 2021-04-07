#include <stdio.h>
struct student
{
	int num;
	char name[20];
	int score[3];
};
char fun(struct student *p)
{
	int i, total = 0;
	for (i = 0; i < 3; i++)
		total = total + p->score[i];
	return (total > 240 ? 'Y' : 'N');
}
int main()
{
	int i;
	struct student s[3] = {{106, "zhang", 89, 96, 88}, {107, "wang", 79, 86, 91}, {109, "zhao", 78, 65, 67}};
	for (i = 0; i < 3; i++)
		printf("\%d  %c\n", s[i].num, fun(&s[i]));
	return 0;
}