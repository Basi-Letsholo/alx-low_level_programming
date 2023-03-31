#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: linked list
 * Return: no. of elements
 */

size_t list_len(const list_t *h)
{
	size_t l = 0;
	const list_t *a = h;

	while (a != NULL)
	{
		l++;
		a = a->next;
	}
	return (l);
}
