#include <stdio.h>
int main()
{
	char b, c, d, e;
	b = '\43'; /* 赋给b的是#字符 */
	c = '\103';
	d = '\x2a';
	e = '\x41'; /* 赋给e的是A字符 */
	printf("b=%c,c=%c,d=%c,e=%c\n", b, c, d, e);
	printf("\"good\40morning!\b\"!\n"); /* 输出的是"good morning"! */
	printf("\123456");					/* 输出的是S456 */
	return 0;
}
