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
	int k, i = 0, j = 0, l = 0;

	while (*s != '\0')
	{
		l++;
	}
	j = l - 1;
	for (i = 0; i < l; i++)
	{
		s[i] = s[j];
		j--;
	}
	s[i] = '\0';
	for (k = 0; k < l; k++)
	{
		_putchar(s[k]);
	}
}
