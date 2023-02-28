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
	int i;
	char *a, *b;

	a = s;
	i = -1;

	while (*a)
	{
		a++;
		i++;
	}
	while (i >= 0)
	{
		a--;
		*b = *a;
		b++;
		--i;
	}
	*b = '\0';
	printf("%s", b);
}
