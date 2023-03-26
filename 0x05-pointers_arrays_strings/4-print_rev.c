#include <stdio.h>
#include "main.h"
/**
 * print_rev - entry point
 *
 * Description: prints string in reverse
 * @s: input string
 * Return: void
 */

void print_rev(char *s)
{
	int i, j, r[1000], l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	j = l - 1;
	for (i = 0; i < l; i++)
	{
		r[i] = s[j];
		j--;
	}
	r[i] = '\0';
	for (i = 0; r[i] != '\0'; i++)
	{
		_putchar(r[i]);
	}
	_putchar('\n');
}
