#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description: finds largest prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
	int n;
	int i;
	int j;

	n = 612852475143;
	for (i = n - 1; n > 0; n--)
	{
		if ((n % i) == 0)
		{
			printf("%d", i);
		}
	}
	return (0);
}
