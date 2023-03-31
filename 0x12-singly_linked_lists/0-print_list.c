#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all elements of list_t
 *
 * @h: struct
 * Return: l
 */

size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len ,h->str);
		}
		h = h->next;
		l++;
	}
	return (l);
}
