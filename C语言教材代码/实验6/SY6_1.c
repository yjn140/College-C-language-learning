#include <stdio.h>
int main()
{
	int i, n;
	float sum = 0, flag = 1.0;
	printf("Input n:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) /* ѭ��n�� */
	{
		sum = sum + flag * i / (2 * i - 1); /* �ۼ�һ�� */
		flag = -flag;						/* �ı��ۼ���ķ��� */
	}
	printf("Sum=%f\n", sum);
	return 0;
}
