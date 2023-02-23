#include <stdio.h>
#include "main.h"
/**
 * _islower - entry point
 *
 * Description: returns 1 if lowercase, otherwise 0
 * @c: letter, lowercase or not?
 *
 * Return: 1 if lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
