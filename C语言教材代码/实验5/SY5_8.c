#include <stdio.h>
int main()
{
	long num, wan, qian, shi, ge;
	printf("\nPlease input a integer:");
	scanf("%ld", &num);
	wan = num / 10000;
	qian = num % 10000 / 1000;
	shi = num % 100 / 10;
	ge = num % 10;
	if (ge = wan && shi == qian)
		printf("%ld is palidrome.\n", num);
	else
		printf("%ld is not palindrome.\n", num);
	return 0;
}