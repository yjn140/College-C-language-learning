#include <stdio.h>
int main()
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		j = i * 10 + 6;	   /* ���ɸ�λΪ6���� */
		if (j % 3 != 0)	   /* �ж��Ƿ��ܱ�3���� */
			continue;	   /* ��������������� */
		printf("%d\n", j); /* ��������������� */
	}
	return 0;
}
