#include <stdio.h>
int main()
{
	int a, b;
	a = sizeof(3 + 5.0); /* ����a��ֵΪ3+5.0��ռ���ֽ��� */
	b = sizeof 3 + 5.0;	 /* ����a��ֵΪ3��ռ���ֽ�����5.0�ĺ� */
	printf("%d,%d,%d\n", a, b, sizeof("china"));
	return 0;
}
