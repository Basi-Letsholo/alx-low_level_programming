#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free listint_t list
 * @head: list to free
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *new = head;
	listint_t *x;

	while (new != NULL)
	{
		x = new->next;

		free(new);
		new = x;
	}
}
