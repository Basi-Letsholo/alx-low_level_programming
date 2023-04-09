#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	int n = 0x1234, r;
	int *p = &n;

	int new = *p;
	if (new == 1234)
	{
		r = 1;
	}
	if (new == 3412)
	{
		r = 0;
	}
	return (r);
}
