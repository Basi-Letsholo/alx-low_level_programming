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
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
