#include <stdio.h>
#include <stdlib.h>
#define N 5
typedef struct node
{
	int data;
	struct node *next;
} NODE;
void invert(NODE *h) /* ������ */
{
	NODE *p, *q, *r;
	p = h->next; /* ָ��pָ������h�ĵ�һ�����*/
	if (p == NULL)
		return;
	q = p->next;	/* ָ��qָ��p����һ�����*/
	p->next = NULL; /* ָ��pָ������Ϊβ���*/
	while (q)
	{
		r = q->next; /* ָ��rָ��q����һ�����*/
		q->next = p; /* �޸�ָ��q,ʹ���ͷָ��p���*/
		p = q;		 /* ָ��pָ��q���*/
		q = r;		 /* ָ��qָ��r���*/
	}
	h->next = p; /* ָ��pָ��Ľ����Ϊͷ������һ���*/
}
NODE *creatlist(int a[])
{
	NODE *h, *p, *q;
	int i;
	h = (NODE *)malloc(sizeof(NODE));
	h->next = NULL;
	for (i = 0; i < N; i++)
	{
		q = (NODE *)malloc(sizeof(NODE));
		q->data = a[i];
		q->next = NULL;
		if (h->next == NULL)
			h->next = p = q;
		else
		{
			p->next = q;
			p = q;
		}
	}
	return h;
}
void outlist(NODE *h)
{
	NODE *p;
	p = h->next;
	if (p == NULL)
		printf("The list is NULL!\n");
	else
	{
		printf("\nHead");
		do
		{
			printf("->%d", p->data);
			p = p->next;
		} while (p != NULL);
		printf("->End");
	}
}
int main()
{
	NODE *head;
	int a[N] = {2, 4, 6, 8, 10};
	head = creatlist(a);
	printf("\nThe original list:");
	outlist(head);
	invert(head);
	printf("\nThe list after inverting:");
	outlist(head);
	return 0;
}