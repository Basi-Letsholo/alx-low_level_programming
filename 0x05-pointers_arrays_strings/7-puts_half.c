#include <stdio.h>
#include "main.h"
/**
 * puts_half - entry point
 *
 * Description: prints second half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	char *s;
	int i, l, m, n;

	s = str;
	l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	if ((l % 2) == 0)
	{
		m = l / 2;
	}
	else if ((l % 2) != 0)
	{
		m = (l + 1) / 2;
	}
	for (n = m; n <= l - 1; n++)
	{
		printf("%c", s[n]);
	}
	printf("\n");
}
