#include <stdio.h>
int main()
{
	int a, b, c, temp;			 /* ����4������ */
	printf("Enter a,b,c=");		 /* �����ʾ */
	scanf("%d%d%d", &a, &b, &c); /* ����3��������ֵ */
	temp = a;
	a = b;
	b = c;
	c = temp;
	printf("a=%d b=%d c=%d\n", a, b, c); /* ������������� */
	return 0;
}
