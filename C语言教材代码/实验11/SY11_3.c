#include <stdio.h>
int main()
{
	int yang(int x, int y);
	int i, j, k;
	for (i = 1; i <= 10; i++) /*�������10��*/
	{
		for (j = 0; j < 30 - 2 * i; j++) /*��������ո����Ŀ*/
			printf(" ");
		for (k = 1; k <= i; k++)	   /*�������ÿ�еĸ���*/
			printf("%4d", yang(i, k)); /*���õݹ麯����ÿ����ռ4��ķ�ʽ���*/
		printf("\n");				   /*����*/
	}
	return 0;
}
int yang(int x, int y)
{
	int z;
	if (y == 1 || y == x) /*����ǵ�һ�л�Խǵ�λ��*/
		z = 1;
	else
		z = yang(x - 1, y - 1) + yang(x - 1, y); /*����Ϊ��һ��ǰһ���뱾����֮��*/
	return z;
}
