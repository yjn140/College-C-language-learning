#include <stdio.h>
int main()
{
	float x = 7.12;
	int a = 5, b;
	b = (int)x % a; /* �������ȱ���xǿ��ת��Ϊ���ͣ��������a��������������b */
	printf("b=%d\n", b);
	printf("x=%f\n", x);
}
