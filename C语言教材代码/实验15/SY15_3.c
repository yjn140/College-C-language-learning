#include <stdio.h>
#include <stdlib.h>
#define N 5
typedef struct node
{
	int data;
	struct node *next;
} NODE;
void invert(NODE *h) /* 链表倒序 */
{
	NODE *p, *q, *r;
	p = h->next; /* 指针p指向链表h的第一个结点*/
	if (p == NULL)
		return;
	q = p->next;	/* 指针q指向p的下一个结点*/
	p->next = NULL; /* 指针p指向结点作为尾结点*/
	while (q)
	{
		r = q->next; /* 指针r指向q的下一个结点*/
		q->next = p; /* 修改指针q,使其回头指向p结点*/
		p = q;		 /* 指针p指向q结点*/
		q = r;		 /* 指针q指向r结点*/
	}
	h->next = p; /* 指针p指向的结点作为头结点的下一结点*/
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