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
    } /*ʹm<n*/
    for (i = m; i <= n; i++)
    {
        result = factsum(i); /*���ú��������Ӻ�*/
        if (i == result)     /*�ж��Ƿ�����*/
            printf("%d.\n", i);
    }
    return 0;
}
int factsum(int n)
{
    int i, sum;
    sum = 1;
    for (i = 2; i <= n / 2; i++) /*����������*/
        if (n % i == 0)
            sum = sum + i; /*�ۼ�����*/
    return sum;            /*�������Ӻ�*/
}
