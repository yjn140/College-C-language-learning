#include <stdio.h>
/* swap1���β�Ϊ����x��y�������Ĺ���Ϊ����������ֵ*/
void swap1(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
}
/* swap2���β�Ϊָ�����px��py�������Ĺ���Ϊ����ָ����ָ��ı�����ֵ*/
void swap2(int *px, int *py)
{
    int t;
    t = *px;
    *px = *py;
    *py = t;
}
/* swap3���β�Ϊָ�����px��py�������Ĺ���Ϊ����ָ����ָ��ı���*/
void swap3(int *px, int *py)
{
    int *pt;
    pt = px;
    px = py;
    py = pt;
}
int main(void)
{
    int a = 1, b = 2;
    int *pa = &a, *pb = &b;
    swap1(a, b); /* ʹ�ñ���a��b���ú���swap1() */
    printf("After calling swap1: a=%d b=%d\n", a, b);
    a = 1;
    b = 2;
    swap2(pa, pb); /* ʹ��ָ��pa��pb���ú���swap2()*/
    printf("After calling swap2: a=%d b=%d\n", a, b);
    a = 1;
    b = 2;
    swap3(pa, pb); /* ʹ��ָ��pa��pb����swap3() */
    printf("After calling swap3: a=%d b=%d\n", a, b);
    getch();
    return 0;
}
