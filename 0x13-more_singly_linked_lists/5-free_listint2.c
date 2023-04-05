#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees list and sets head to NULL
 * @head: list to free
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *new = *head;
	listint_t *x;

	if (head == NULL)
	{
		return;
	}
	while (new != NULL)
	{
		x = new->next;

		free(new);
		new = x;
	}
	*head = NULL;
}
