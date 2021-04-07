struct address /* ����ͨѶ¼�ṹ */
{
	char name[20];
	int year, month, date;
	char tel[12];
	char addr[40];
} sort(struct address book[], int n) /* ��¼���������� */
{
	int i, j, k;
	struct address temp;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (book[j].year > book[k].year)
				k = j; /* �Ƚ���� */
			if (book[j].year == book[k].year && book[j].month > book[k].month)
				k = j; /* �����ͬ���Ƚ��·� */
			if (book[j].year == book[k].year && book[j].month == book[k].month &&
				book[j].date > book[k].date)
				k = j; /* ��ݡ�����ͬ���Ƚ����� */
		}
		if (k != i)
		{
			temp = book[i];
			book[i] = book[k];
			book[k] = temp;
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\n", i + 1);
		printf("Name:%s\n", book[i].name);
		printf("Birthday:%d-%d-%d\n", book[i].year, book[i].month, book[i].date);
		printf("Tel:%s\n", book[i].tel);
		printf("Address:%s\n\n", book[i].addr);
	}
}
#include <stdio.h>
int main()
{
	int i, n;
	struct address b[100];
	printf("Input n:");
	scanf("%d", &n);
	printf("Input information\n");
	for (i = 0; i < n; i++)
		scanf("%s%d%d%d%s%s", b[i].name, &b[i].year, &b[i].month, &b[i].date, &b[i].tel, b[i].addr);
	sort(b, n);
	return 0;
}