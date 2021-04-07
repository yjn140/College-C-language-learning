#include <stdio.h>
struct link /* 链表的结点结构 */
{
	char ch;		   /* 数据域，保存从键盘输入的一个字符 */
	struct link *next; /* 指针域，指向下一个结点 */
};
struct link *create() /* 创建链表 */
{
	char ch;
	struct link *p1, *p2, *h = NULL; /* 头指针h，尾指针p2，新结点p1 */
	while ((ch = getchar()) != '\n') /* 从键盘输入一行字符 */
	{
		p1 = (struct link *)malloc(sizeof(struct link)); /* 为新结点p1分配内存 */
		p1->ch = ch;									 /* 为结点p1数据域读入数据 */
		if (h == NULL)									 /* 若链为空 */
			h = p2 = p1;
		else /* 将新结点插入到链尾 */
		{
			p2->next = p1;
			p2 = p1;
		}
	}
	p2->next = NULL; /* p2为链尾 */
	return h;		 /* 链表创建完毕，返回头指针h */
}
struct link *sort(struct link *h) /* 排序 */
{
	struct link *p1, *p2, *q1, *q2;
	p1 = h;
	p2 = p1->next;
	while (p2)
	{
		if (p1->ch <= p2->ch) /* 如果顺序正确 */
		{
			p1 = p2; /* p1指向下一个结点 */
			p2 = p2->next;
		} /* p2指向下一个结点 */
		else
		{
			p1->next = p2->next; /* 从链表中删除p2指向的结点 */
			/* 以下程序段实现将p2指向的结点插入链表中 */
			q1 = h;
			q2 = q1->next;
			if (p2->ch < h->ch) /* 若p2结点的字母小于头结点的字母 */
			{
				p2->next = h; /* p2指向的结点插入到头结点的前面 */
				h = p2;
			} /* p2作为头结点 */
			else
			{
				while (p2->ch > q2->ch) /* 查找p2的位置 */
				{
					q1 = q2;
					q2 = q2->next;
				}
				p2->next = q2; /* p2结点插到q2的前面（先连接） */
				q1->next = p2; /* q1结点指向p2（后断开） */
			}
			p2 = p1->next; /* p2结点p1的下一个结点 */
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
	} /* 若h为NULL，则输出链表为空 */
	p = h;
	printf("head");
	while (p != NULL) /* 输出链表各结点的数据域信息 */
	{
		printf("->%c", p->ch);
		p = p->next; /* p指向下一个结点 */
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