#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter a,b=");	/* �����ʾ */
	scanf("%o,%x", &a, &b); /* �ֱ��԰˽��ơ�ʮ�������������a��b��ֵ */
	c = a * b;
	printf("%d,%o,%x\n", c, c, c); /* �ֱ���ʮ���ơ��˽��ơ�ʮ�������������c��ֵ */
	return 0;
}
