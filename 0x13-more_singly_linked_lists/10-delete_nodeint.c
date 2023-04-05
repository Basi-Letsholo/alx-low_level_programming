#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - eletes the node at index index of a linked list
 *
 * @head: list
 * @index: index
 * Return: 1 on success, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c = *head, *new;
	unsigned int i = 0;

	if (head == NULL)
	{
	return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}
	while (c != NULL && i < index - 1)
	{
		c = c->next;
		i++;
	}
	if (i != index - 1 || c == NULL || c->next == NULL)
	{
		return (-1);
	}
	new = c->next;
	c->next = c->next->next;
	free(new);

	return (1);
}
