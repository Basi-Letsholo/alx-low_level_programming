#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a str in reverse using recursion
 *
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		s++;
		_putchar(*s);
	}
	if (*s == '\0')
	{
		return;
	}
}
