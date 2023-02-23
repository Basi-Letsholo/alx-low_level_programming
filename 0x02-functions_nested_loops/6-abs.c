#include <stdio.h>
#include "main.h"
/**
 * _abs - entry point
 * Description: prints absolute value of each integer
 * @b: integer
 * Return: always 0 (success)
 */

int _abs(int b)
{
	if (b >= 0)
	{
		/*printf("%d\n", b);*/
		b = b;
	}
	else if (b < 0)
	{
		b = b - (2 * b);
		/*printf("%d\n", (b - (2 * b)));*/
	}
	return (b);
}
