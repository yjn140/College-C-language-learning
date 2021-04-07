#include <stdio.h>
int main()
{
    int i, a[10] = {23, 35, 21, 26, 7, 9, 11, 14, 17, 20};
    void invert(int *x, int n);
    printf("The original array:\n");
    for (i = 0; i < 10; i++)
        printf("%4d", a[i]);
    printf("\n");
    invert(a, 10);
    printf("The array has been inverted:\n");
    for (i = 0; i < 10; i++)
        printf("%4d", a[i]);
    printf("\n");
    return 0;
}
void invert(int *x, int n)
{
    int temp, *i, *j, *p, m = (n - 1) / 2;
    i = x;
    j = x + n - 1;
    p = x + m;
    for (; i <= p; i++, j--)
    {
        temp = *i;
        *i = *j;
        *j = temp;
    }
}
//void invert(int *x,int n)
//{   int temp,*i,*j;
//    i=x;
//    j=x+n-1;
//    while(i<j)
//    {   temp=*i;
//        *i=*j;
//        *j=temp;i++;j--;
//    }
//}