#include <stdio.h>

int main41(void)
{
	int x;
	x = 3 + 5, 3 * 5, 10 / 5;

	printf("x = %d\n", x);

	x = (3 + 5, 3 * 5, 10 / 5);

	printf("x = %d\n", x);

	return 0;
}