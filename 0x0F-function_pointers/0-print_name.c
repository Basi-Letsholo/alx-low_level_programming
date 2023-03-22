#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 *
 * @name: name to be printed
 * @f: function pointer
 * Return: void
 */

void f(char a)
{
	int i;

	for (i = 0; *a != '\0'; i++)
	{
		_putchar(*(a + 1);
	}
}
void print_name(char *name, void (*f)(char *))
{
	name = (*f)(name);
}
