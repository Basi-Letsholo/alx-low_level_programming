#include <stdio.h>
#include "main.h"
/**
 * _puts - entry point
 *
 * Description: prints a string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	char *s;

	s = str;

	while (*s != '\0')
	{
		printf("%c", *s++);
	}
	printf("\n");
}
