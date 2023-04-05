#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *
 * @head: list
 * @index: index of node, starting at zero
 * Return: new list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int i = 0;

	while (new != NULL && i < index)
	{
		new = new->next;
		i++;
	}
	if (i != index || new == NULL)
	{
		return (NULL);
	}
	return (new);
}
