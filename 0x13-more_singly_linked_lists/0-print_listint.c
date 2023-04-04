#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints the elements of a linked list
 *
 * @h: linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		if (h->n == 0)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", h->n);
			h = h->next;
			l++;
		}
	}
	return (l);
}
