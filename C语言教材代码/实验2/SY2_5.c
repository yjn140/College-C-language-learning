#include <stdio.h>
int main()
{
    int a, b, c, number; /* 定义变量 */
    number = 123;
    a = number / 100; /* 计算百位数 */
    b = (number - a * 100) / 10;
    c = number % 10;                      /* 计算个位数 */
    printf("反序数是:%d%d%d\n", c, b, a); /* 输出反序数 */
    return 0;
}
