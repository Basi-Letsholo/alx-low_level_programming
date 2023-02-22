#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - entry point
 *
 * Description: prints every hour of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 3; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					printf("%d%d:%d%d\n", a, b, c, d);
				}
			}
		}
	}
}
