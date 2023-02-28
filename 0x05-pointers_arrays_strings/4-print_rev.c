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
	int i, j, l;
	char *a, *b, ch;

	l = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	a = s;
	b = s;
	for (j = 0; j < l - 1; j++)
	{
		b++;
	}
	for (j = 0; j < l / 2; j++)
	{
		ch = *b;
		*b = *a;
		*a = ch;
		printf("%c", *a++);
		printf("%c", *b--);
	}
}
