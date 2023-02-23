#include <stdio.h>
#include "main.h"

/**
 *_isalpha - entry point
 * Description: checks for lower or upper case letters
 * @c: letter
 * Return: 1 if letter, otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
