#include <stdio.h>
int main(void)
{
	int i, j;
	for (i = 1; i <= 7; i++)
	{
		if (i <= 4) /*输出图形的上4行*/
		{
			for (j = 1; j <= 20 - 2 * i; j++)
				printf(" "); /*输出行前的空格*/
			for (j = 1; j <= 2 * i - 1; j++)
				printf("*"); /*输出一行中的* */
		}
		else /*输出图形的下3行*/
		{
			for (j = 1; j <= 12 + 2 * (i - 4); j++)
				printf(" "); /*输出行前的空格*/
			for (j = 1; j <= 2 * (8 - i); j++)
				printf("*"); /*输出一行中的* */
		}
		printf("\n");
	}
	return 0;
}
//#include<stdio.h>
//int main()
//{	int i,j,t;
//	for(i=1;i<=7;i++)
//	{	if(i<4)
//			t=i;
//		else
//			t=8-i;
//		for(j=1;j<=8-t;j++)
//			printf(" ");
//		for(j=1;j<=2*t-1;j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}
