#include <stdio.h>
#include "main.h"
/**
 * *_memset - fills n first bytes of memory of *s with b
 *
 * @s: pointer
 * @b: byte
 * @n: int
 * Return: s, a char pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
	{
		s[i] = b;
	}
	return (s);
}
