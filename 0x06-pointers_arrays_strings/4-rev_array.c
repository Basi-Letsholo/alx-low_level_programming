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
	int i, j, *r = a;


	for (i = 0; i < n; i++)
	{
		r[i] = a[i];
	}
	for (j = n - 1; j >= 0; j--)
	{
		r = r[j];
	}
	a = r;
}
