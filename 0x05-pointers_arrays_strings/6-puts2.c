#include <stdio.h>
#include "main.h"
/**
 * puts2 - entry point
 *
 * Description: prints every other character of a string
 * @str: string
 * Return: void
 */

void puts2(char *str)
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
		m = l;
	}
	for (n = m; n <= l - 1; n++)
	{
		printf("%c", s[n]);
	}
	printf("\n");
}
