#include <stdio.h>
int main()
{
	int n, s;
	printf("����n��ֵ��");
	scanf("%d", &n); /* ����n��ֵ */
	s = sum(n);		 /* ���õݹ麯��sum */
	printf("%d", s);
	return 0;
}
int sum(int n)
{
	if (n == 0) /* �ݹ�������� */
		return 0;
	else
		return n + sum(n - 1); /* �ݹ���� */
}
