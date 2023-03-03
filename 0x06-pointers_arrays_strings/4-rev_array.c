#include <stdio.h>
#include "main.h"
/**
 * reverse_array - entry point
 *
 * Description: reverses arrays
 * @a: array
 * @n: length of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = -1, j, *r = a;

	j = n;
	while (j > - 1)
	{
		i++;
		j--;
		r[i] = r[j];
	}
	a = r;
}
