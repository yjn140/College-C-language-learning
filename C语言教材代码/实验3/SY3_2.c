#include <stdio.h>
int main()
{
	int a;
	float b;
	printf("Enter a and b:");	   /* 输出提示 */
	scanf("%d%f", &a, &b);		   /* 输入a、b的值 */
	printf("\na=%d,b=%f\n", a, b); /* 输出a、b的值 */
	return 0;
}
