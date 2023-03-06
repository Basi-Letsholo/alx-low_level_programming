#include <stdio.h>
#include "main.h"
/**
 * *_memcpy - copies first n bytes of memory from src to dest
 *
 * @dest: pointer to copy to
 * @src: pointer to copy from
 * @n: how many bytes of memory to copy
 * Return: dest, a char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
