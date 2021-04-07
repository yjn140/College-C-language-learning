#include <stdio.h>
int main()
{
    int i, a[10];
    printf("Please enter 10 integer numbers:");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]); /*通过下标引用数组元素*/
    for (i = 0; i < 10; i++)
        printf("a[%d]=%d\n", i, a[i]);
    printf("\n");
    return 0;
}