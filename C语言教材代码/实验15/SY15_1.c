#include <stdio.h>
struct link /* ����Ľ��ṹ */
{
	char ch;		   /* �����򣬱���Ӽ��������һ���ַ� */
	struct link *next; /* ָ����ָ����һ����� */
};
struct link *create() /* �������� */
{
	char ch;
	struct link *p1, *p2, *h = NULL; /* ͷָ��h��βָ��p2���½��p1 */
	while ((ch = getchar()) != '\n') /* �Ӽ�������һ���ַ� */
	{
		p1 = (struct link *)malloc(sizeof(struct link)); /* Ϊ�½��p1�����ڴ� */
		p1->ch = ch;									 /* Ϊ���p1������������� */
		if (h == NULL)									 /* ����Ϊ�� */
			h = p2 = p1;
		else /* ���½����뵽��β */
		{
			p2->next = p1;
			p2 = p1;
		}
	}
	p2->next = NULL; /* p2Ϊ��β */
	return h;		 /* ��������ϣ�����ͷָ��h */
}
void printlink(struct link *h)
{
	struct link *p;
	if (h == NULL)
	{
		printf("h is empty!\n");
		return;
	} /* ��hΪNULL�����������Ϊ�� */
	p = h;
	printf("head");
	while (p != NULL) /* ��������������������Ϣ */
	{
		printf("->%c", p->ch);
		p = p->next; /* pָ����һ����� */
	}
	printf("\n");
}
int main()
{
	struct link *h;
	h = create();
	printlink(h);
	return 0;
}