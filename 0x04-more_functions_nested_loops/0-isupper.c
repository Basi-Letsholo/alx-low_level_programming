#include <stdio.h>
#include "main.h"
/**
 * _isupper - entry point
 *
 * Description: returns 1 if c is uppercase, otherwise returns 0
 * @c: character
 *
 * Return: 1 if upper, 0 otherwisw
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
