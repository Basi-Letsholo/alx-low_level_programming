#include <stdio.h>
#include "main.h"
/**
 * _abs - entry point
 * descriptions: prints absolute value of each integer
 * Return: always 0
 */

int _abs(int)
{
	int a;
	int b;

	if (a >= 0)
	{
		 printf("%d\n", a);
	}
	else if (a < 0)
	{
		b = a - (2 * a);
		printf("%d\n", b);
	}
	return (0);
}
