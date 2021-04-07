#include <stdio.h>
int factsum(int n);
int main()
{
    int i, m, n, result;
    printf("Enter two integer numbers m and n:");
    scanf("%d,%d", &m, &n);
    if (m > n)
    {
        i = m;
        m = n;
        n = i;
    } /*使m<n*/
    for (i = m; i <= n; i++)
    {
        result = factsum(i); /*调用函数求因子和*/
        if (i == result)     /*判断是否完数*/
            printf("%d.\n", i);
    }
    return 0;
}
int factsum(int n)
{
    int i, sum;
    sum = 1;
    for (i = 2; i <= n / 2; i++) /*找所有因子*/
        if (n % i == 0)
            sum = sum + i; /*累加因子*/
    return sum;            /*返回因子和*/
}
