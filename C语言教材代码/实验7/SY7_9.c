#include <stdio.h>
int main(void)
{
	int i, j;
	for (i = 1; i <= 7; i++)
	{
		if (i <= 4) /*���ͼ�ε���4��*/
		{
			for (j = 1; j <= 20 - 2 * i; j++)
				printf(" "); /*�����ǰ�Ŀո�*/
			for (j = 1; j <= 2 * i - 1; j++)
				printf("*"); /*���һ���е�* */
		}
		else /*���ͼ�ε���3��*/
		{
			for (j = 1; j <= 12 + 2 * (i - 4); j++)
				printf(" "); /*�����ǰ�Ŀո�*/
			for (j = 1; j <= 2 * (8 - i); j++)
				printf("*"); /*���һ���е�* */
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
