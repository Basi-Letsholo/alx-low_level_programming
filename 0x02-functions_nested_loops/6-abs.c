#include <stdio.h>
#include "main.h"
/**
 * _abs - entry point
 * description: prints absolute value of each integer
 * @int: integer
 * Return: always 0 (success)
 */
int _abs(int b)
{
	if (b >= 0)
	{
		 printf("%d\n", b);
	}
	else if (b < 0)
	{
		printf("%d\n", (b - (2 * b)));
	}
	return (0);
}
