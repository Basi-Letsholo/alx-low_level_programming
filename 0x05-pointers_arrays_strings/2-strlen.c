#include <stdio.h>
#include "main.h"
/**
 * _strlen - entry point
 *
 * Description: return length of string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int n;
	int i;

	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		n++;
	}
	return (n);
}
