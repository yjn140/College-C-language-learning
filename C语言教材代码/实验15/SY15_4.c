#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct node
{
	int data;
	struct node *next;
} NODE;
int add(NODE *h)
{
	int sum = 0;
	NODE *p;
	p = h;
	while (p != NULL)
	{
		if (p->data % 2 == 0)
			sum += p->data;
		p = p->next;
	}
	return sum;
}
NODE *creat(int n)
{
	NODE *h, *p, *s, *q;
	int i, x;
	h = p = (NODE *)malloc(sizeof(NODE));
	srand(time(0));
	for (i = 1; i <= n; i++)
	{
		s = (NODE *)malloc(sizeof(NODE));
		s->data = rand() % 16;
		p->next = s;
		p = p->next;
	}
	p->next = NULL;
	return h;
}
void print(NODE *h)
{
	NODE *p;
	p = h->next;
	printf("\nThe list:\nhead");
	while (p)
	{
		printf("->%d", p->data);
		p = p->next;
	}
}
outresult(int s)
{
	printf("\nThe sum of even numbers:%d\n", s);
}
int main()
{
	NODE *head;
	int even;
	head = creat(10);
	print(head);
	even = add(head);
	printf("\nThe result:");
	outresult(even);
	return 0;
}