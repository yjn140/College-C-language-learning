#include <stdio.h>
int main()
{
	void printn(int x); /* �������� */
	int n;
	scanf("%d", &n);
	if (n < 0)
	{
		n = -n;
		putchar('-');
	}
	printn(n); /* ���ú��� */
	return 0;
}
void printn(int x) /* �ݹ麯�����ײ� */
{
	if (x >= 0 && x <= 9)
		printf("%d", x);
	else
	{
		printf("%d", x % 10); /* ���x�ĸ�λ���� */
		printn(x / 10);		  /* ����ȥ��λ��������Ϊ�µ����������ݹ� */
	}
}
