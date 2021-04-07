#include<stdio.h>
int invert(long,long *); 			/* 声明函数 */
int main()
{	long x,a,*pa=&a;
	printf("\nplease input a number:");
	scanf("%ld",&x); 			/* 输入一个十进制正整数 */
	while(!invert(x,pa)) 			/* 调用函数判断是否满足条件 */
	{	printf("\nnumber is %ld, invert is %ld, sum is %ld",x,*pa,x+*pa);
		x+=*pa; 			/* 正整数与反序数相加 */
	}
	printf("\n%ld is Palindrome number.",x);
	return 0;
}
int invert(long x,long *invertx)
{	long m=x,sum=0;
	while(m) 				/* 得到反序数 */
	{	sum*=10;
		sum+=m%10;
		m/=10;
	}
	*invertx=sum;
	if(x==*invertx) 			/* 判断是否回文数 */
		return 1; 			/* 是回文数返回1 */
	else
	return 0; 				/* 不是回文数返回0 */
}

