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
struct link *sort(struct link *h) /* ���� */
{
	struct link *p1, *p2, *q1, *q2;
	p1 = h;
	p2 = p1->next;
	while (p2)
	{
		if (p1->ch <= p2->ch) /* ���˳����ȷ */
		{
			p1 = p2; /* p1ָ����һ����� */
			p2 = p2->next;
		} /* p2ָ����һ����� */
		else
		{
			p1->next = p2->next; /* ��������ɾ��p2ָ��Ľ�� */
			/* ���³����ʵ�ֽ�p2ָ��Ľ����������� */
			q1 = h;
			q2 = q1->next;
			if (p2->ch < h->ch) /* ��p2������ĸС��ͷ������ĸ */
			{
				p2->next = h; /* p2ָ��Ľ����뵽ͷ����ǰ�� */
				h = p2;
			} /* p2��Ϊͷ��� */
			else
			{
				while (p2->ch > q2->ch) /* ����p2��λ�� */
				{
					q1 = q2;
					q2 = q2->next;
				}
				p2->next = q2; /* p2���嵽q2��ǰ�棨�����ӣ� */
				q1->next = p2; /* q1���ָ��p2����Ͽ��� */
			}
			p2 = p1->next; /* p2���p1����һ����� */
		}
	}
	return h;
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
	printf("Before sorting:\n");
	printlink(h);
	h = sort(h);
	printf("After sorting:\n");
	printlink(h);
	return 0;
}