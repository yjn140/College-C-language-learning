#include <stdio.h>
#include <stdlib.h>
#define N 5
typedef struct node
{
	int data;
	struct node *next;
} NODE;
NODE *creatlist()
{
	NODE *h, *p, *q;
	int i, x;
	h = (NODE *)malloc(sizeof(NODE));
	h->next = NULL;
	printf("\nPlease input data:");
	for (i = 0; i < N; i++)
	{
		q = (NODE *)malloc(sizeof(NODE));
		scanf("%d", &x);
		q->data = x;
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
		printf("Head");
		do
		{
			printf("->%d", p->data);
			p = p->next;
		} while (p != NULL);
		printf("->End");
	}
}
int add(NODE *h)
{
	int result = 0;
	while (h != NULL)
	{
		result += h->data;
		h = h->next;
	}
	return result;
}
int main()
{
	int y;
	NODE *head;
	head = creatlist();
	printf("The original list:");
	outlist(head);
	y = add(head);
	printf("\nresult=%d", y);
	return 0;
}