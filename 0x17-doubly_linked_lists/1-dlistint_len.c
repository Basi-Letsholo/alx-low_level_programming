#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - returns number of elements in a linked list
 * @h: linked list
 * Return: no. of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t list_len = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		list_len++;
	}
	return (list_len);
}
