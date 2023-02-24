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
	long int n;
	int i;

	n = 612852475143;
	for (i = n - 1; i > 0; i--)
	{
		if ((n % i) == 0)
		{
			printf("%d", i);
		}
	}
	return (0);
}
