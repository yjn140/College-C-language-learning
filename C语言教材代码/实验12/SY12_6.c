#include <stdio.h>
int main()
{
    int i, n, m, a[10] = {12, 5, 13, 25, 21, 46, 34, 37, 19, 2}, b[10], c[10] = {0};
    printf("Sort before:\n");
    for (i = 0; i < 10; i++)
        printf("%4d", *(a + i));
    printf("\n");
    for (n = 0; n < 10; n++)
    {
        for (i = 0; i < 10; i++)
            if (*(c + i) == 0)
                break;
        m = i;
        for (i = 0; i < 10; i++)
            if (*(c + i) == 0 && *(a + m) < *(a + i))
                m = i;
        *(b + n) = *(a + m);
        *(c + m) = 1;
    }
    printf("Sorted after:\n");
    for (i = 0; i < 10; i++)
        printf("%4d", *(b + i));
    printf("\n");
    return 0;
}