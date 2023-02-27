#include <stdio.h>
#include "main.h"
/**
 * swap_int - entry point
 *
 * Description: swaps two integer values
 * @a: int 1
 * @b: int 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
