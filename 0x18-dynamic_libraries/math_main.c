#include <stdio.h>
#include "math.h"

int main(void)
{
	int a, b;

	a = 5;
	b = 10;

	printf("%d + %d = %d\n", a, b, add(a, b));
	printf("%d - %d = %d\n", b, a, sub(a, b));
	printf("%d * %d = %d\n", 10, 20, mul(10, 20));
	printf("%d / %d = %d\n", 100, a, div(100, a));
	printf("%d mod %d = %d\n", b, a, mod(b, a));

	return (0);
}
