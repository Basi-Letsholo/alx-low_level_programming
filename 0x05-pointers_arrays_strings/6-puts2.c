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
	int i, l;

	s = str;
	l = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
		if ((l % 2) == 0)
		{
		printf("%c", s[l]);
		}
	}
	printf("\n");
}
