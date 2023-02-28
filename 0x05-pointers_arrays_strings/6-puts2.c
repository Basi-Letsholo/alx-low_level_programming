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
	int i, j, l;

	s = str;
	l = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		l++;
	}
	while (*s != '\0')
	{
		for (i = 0; (i % 2) == 0; i++)
		{
			if (i >= l)
			{
				*s = s[i];
				printf("%c", *s);
			}
		}
	}
	printf("\n");
}
