#include <stdio.h>
int main()
{
    int i, a[10], *p;
    p = a;
    printf("Enter 10 integer numbers:\n");
    for (i = 0; i < 10; i++)
        p[i] = i;
    for (i = 0; i < 10; i++)
        printf("a[%d]=%d\n", i, p[i]);
    printf("\n");
    return 0;
}