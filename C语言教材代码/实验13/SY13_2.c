#include<stdio.h>
int invert(long,long *); 			/* �������� */
int main()
{	long x,a,*pa=&a;
	printf("\nplease input a number:");
	scanf("%ld",&x); 			/* ����һ��ʮ���������� */
	while(!invert(x,pa)) 			/* ���ú����ж��Ƿ��������� */
	{	printf("\nnumber is %ld, invert is %ld, sum is %ld",x,*pa,x+*pa);
		x+=*pa; 			/* �������뷴������� */
	}
	printf("\n%ld is Palindrome number.",x);
	return 0;
}
int invert(long x,long *invertx)
{	long m=x,sum=0;
	while(m) 				/* �õ������� */
	{	sum*=10;
		sum+=m%10;
		m/=10;
	}
	*invertx=sum;
	if(x==*invertx) 			/* �ж��Ƿ������ */
		return 1; 			/* �ǻ���������1 */
	else
	return 0; 				/* ���ǻ���������0 */
}

