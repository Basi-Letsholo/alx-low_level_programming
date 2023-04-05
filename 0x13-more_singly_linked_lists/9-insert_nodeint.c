#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: list
 * @idx: where new node will be added
 * @n: int
 * Return: new list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *c = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (c != NULL && i < idx - 1)
	{
		c = c->next;
		i++;
	}
	if (i != idx - 1 || c == NULL)
	{
		return (NULL);
	}
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = c->next;
	c->next = new;
	return (new);
}
