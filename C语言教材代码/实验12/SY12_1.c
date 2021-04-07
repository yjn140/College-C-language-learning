#include <stdio.h>
/* swap1的形参为变量x，y，函数的功能为交换变量的值*/
void swap1(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
}
/* swap2的形参为指针变量px，py，函数的功能为交换指针所指向的变量的值*/
void swap2(int *px, int *py)
{
    int t;
    t = *px;
    *px = *py;
    *py = t;
}
/* swap3的形参为指针变量px，py，函数的功能为交换指针所指向的变量*/
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
    swap1(a, b); /* 使用变量a，b调用函数swap1() */
    printf("After calling swap1: a=%d b=%d\n", a, b);
    a = 1;
    b = 2;
    swap2(pa, pb); /* 使用指针pa，pb调用函数swap2()*/
    printf("After calling swap2: a=%d b=%d\n", a, b);
    a = 1;
    b = 2;
    swap3(pa, pb); /* 使用指针pa，pb调用swap3() */
    printf("After calling swap3: a=%d b=%d\n", a, b);
    getch();
    return 0;
}
