#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i, a[10];
    srand(time(0));
    printf("The passing random numbers endows with a value for several:\n");
    for (i = 0; i < 10; i++)
        *(a + i) = rand() % 90 + 10;
    for (i = 0; i < 10; i++)
        printf("a[%d]=%d\n", i, *(a + i));
    printf("\n");
    return 0;
}