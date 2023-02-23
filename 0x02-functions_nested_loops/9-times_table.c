#include <stdio.h>
#include "main.h"
/**
 * times_table - prints 9 times table
 * Return: void
 */

void times_table(void)
{
	int n;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			if ((n * i) < 10)
			{
				printf(" ");
			}
			printf("%d", n * i);
			if (n !=  9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
