#include <stdio.h>
int main()
{
	int n;
	printf("������һ����������"); /* �����ʾ */
	scanf("%d", &n);
	if (n % 2 == 0) /* �ж��Ƿ�Ϊż�� */
		printf("%d��һ��ż��\n", n);
	else
		printf("%d��һ������\n", n);
	return 0;
}
