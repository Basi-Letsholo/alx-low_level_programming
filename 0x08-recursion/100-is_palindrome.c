#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - finds reverse of str to test if palindrome
 * is_palindrome - tests if str is palindrome
 *
 * @s: string
 * Return: 1 if palindrome, 0 otherwise
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

int is_palindrome(char *s)
{
	char *rev;

	rev = _print_rev_recursion(s);

	if (*s == '\0')
	{
		return (1);
	}
	if (*s != *rev)
	{
		return (0);
	}
	is_palindrome(*(s + 1));
	return (1);
}
