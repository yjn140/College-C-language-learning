#include <stdio.h>
int main()
{
	float temperature, result; /* �����¶��������� */
	char type;				   /* �����������ͱ��� */
	printf("Please input type,temperature data:");
	scanf("%c,%f", &type, &temperature); /* ���������������¶� */
	if (type == 'f' || type == 'F')
	{
		result = 5 * (temperature - 32) / 9; /* ת��Ϊ�����¶� */
		printf("The result is %f\n", result);
	}
	else if (type == 'c' || type == 'C')
	{
		result = 9 * temperature / 5 + 32; /* ת��Ϊ�����¶� */
		printf("The result is %f\n", result);
	}
	else
		printf("Input error."); /* ������� */
	return 0;
}
