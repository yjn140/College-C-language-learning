#include <stdio.h>
#define N 10
int main()
{
	int a[N], i, x;
	printf("����%d��������", N); /* �����ʾ */
	for (i = 0; i <= N - 1; i++)
		scanf("%d", &a[i]);
	printf("����Ҫ�ҵ���x��");
	scanf("%d", &x); /* ����Ҫ�ҵ���x */
	for (i = 0; i <= N - 1 && a[i] != x; i++)
		;		/* �������в���x */
	if (i >= N) /* �������������򲻴���x */
		printf("δ�ҵ�\n");
	else
		printf("�ҵ��ˣ��ǵ�%d����\n", i + 1);
	return 0;
}
