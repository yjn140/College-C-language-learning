#include <stdio.h>
int main()
{
	char b, c, d, e;
	b = '\43'; /* ����b����#�ַ� */
	c = '\103';
	d = '\x2a';
	e = '\x41'; /* ����e����A�ַ� */
	printf("b=%c,c=%c,d=%c,e=%c\n", b, c, d, e);
	printf("\"good\40morning!\b\"!\n"); /* �������"good morning"! */
	printf("\123456");					/* �������S456 */
	return 0;
}
