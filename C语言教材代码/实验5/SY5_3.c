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
		break; /* 1、3、5、7、8、10、12月份31天 */
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break; /* 4、6、9、11月份30天  */
	case 2:
		if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) /* 判断是否闰年  */
			days = 29;											 /* 闰年的2月份29天  */
		else
			days = 28; /* 平年的2月份28天  */
		break;
	}
	printf("The number of days of %d,%d is %d.\n", month, year, days);
	return 0;
}
