#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string using recursion
 *
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	if (s[i] != '\0')
	{
		_putchar(_puts_recursion(s[i + 1]));
	}
	_putchar('\n');
}
