#include <stdio.h>
int main()
{
    int a, b, c, number; /* ������� */
    number = 123;
    a = number / 100; /* �����λ�� */
    b = (number - a * 100) / 10;
    c = number % 10;                      /* �����λ�� */
    printf("��������:%d%d%d\n", c, b, a); /* ��������� */
    return 0;
}
