#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    void merge(char *);
    printf("Please enter a string:");
    gets(str);
    merge(str);
    printf("Inverted and connecting after:");
    puts(str);
    return 0;
}
void merge(char *s)
{
    char *p, *q, n;
    n = strlen(s);
    for (p = s + n - 1, q = s + n; p >= s; p--, q++)
        *q = *p;
    *q = '\0';
}