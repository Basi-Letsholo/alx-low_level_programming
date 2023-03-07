#include <stdio.h>
#include "main.h"
/**
 * *_strcpy - copies src to dest
 *
 * @dest: where to copy str to
 * @src: str to copy
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j, l;

	for (i = 0; src[i] != '\0'; i++)
	{
		l++;
	}
	for (j = 0; j <= l; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
