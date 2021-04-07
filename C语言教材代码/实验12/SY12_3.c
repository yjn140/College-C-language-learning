#include <stdio.h>
int main()
{
    int i, a[5] = {10, 11, 12, 13, 14}, *p = a;
    p++;
    printf("%d\n", *p); /*输出11*/
    p = a;
    printf("%d\n", *p++); /*输出10，指针指向a[1]*/
    p = a;
    printf("%d\n", *(p++)); /*输出10，指针指向a[1]*/
    p = a;
    printf("%d\n", *(++p)); /*指针指向a[1],输出11*/
    p = a + 2;
    printf("%d\n", *(p--)); /*输出12，指针指向a[1]*/
    p = &a[2];
    printf("%d\n", *(--p)); /*指针指向a[1],输出11*/
    p = a;
    printf("%d\n", ++(*p)); /*a[0]的值加1，输出11*/
    return 0;
}