#include <stdio.h>
int main()
{
	int year, month, days;
	printf("Please input year,month:");
	scanf("%d,%d", &year, &month);
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break; /* 1��3��5��7��8��10��12�·�31�� */
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break; /* 4��6��9��11�·�30��  */
	case 2:
		if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) /* �ж��Ƿ�����  */
			days = 29;											 /* �����2�·�29��  */
		else
			days = 28; /* ƽ���2�·�28��  */
		break;
	}
	printf("The number of days of %d,%d is %d.\n", month, year, days);
	return 0;
}
