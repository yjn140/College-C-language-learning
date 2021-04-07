#include <stdio.h>
int main()
{
	int n = 0;
	printf("Please input a string:\n");
	while (getchar() != '\n')
		n++;
	printf("The character number is %d", n);
	return 0;
}
