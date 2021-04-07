#include <stdio.h>
int main()
{
    int i, a[10], *p = a;
    printf("Please enter 10 integer numbers:");
    for (i = 0; i < 10; i++)
        scanf("%d", p++);
    for (p = a, i = 0; i < 10; i++, p++)
        printf("%3d", *p);
    printf("\n");
    return 0;
}
