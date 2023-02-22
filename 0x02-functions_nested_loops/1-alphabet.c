#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Description: prints alphabet, a to z
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
