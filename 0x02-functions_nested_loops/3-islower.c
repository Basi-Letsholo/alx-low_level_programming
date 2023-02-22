#include <stdio.h>
#include "main.h"
/**
 * _islower - entry point
 * description: returns 1 if lowercase, otherwise 0
 * @c: letter, lowercase or not?
 * return: 1
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
