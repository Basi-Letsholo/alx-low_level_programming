#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	int n = 0x11123499, *p, r;

	p = &n;
	if (*p == 0x99)
	{
		r = 1;
	}
	if (*p == 0x11)
	{
		r = 0;
	}
	return (r);
}
