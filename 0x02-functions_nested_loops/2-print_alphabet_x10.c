#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints alphabet x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char az;
	char i;

	for (i = 1; i <= 10; i++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
	_putchar('\n');
	}
}
