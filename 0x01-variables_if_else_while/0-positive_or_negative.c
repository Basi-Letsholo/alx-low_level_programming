#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints if n is +ve, -ve, or 0
 *
 * Return - 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d", n);
		printf(" is zero");
	}
	else if (n > 0)
	{
		printf("%d", n);
		printf(" is positive");
	}
	else if (n < 0)
	{
		printf("%d", n);
		printf(" is negative");
	}
	printf("\n");
	return (0);
}
