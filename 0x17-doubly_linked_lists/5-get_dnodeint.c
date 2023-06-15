#include "lists.h"
/**
 * get_dnodeint_at_index - finds the node at index
 * @head: head of list
 * @index: index of node
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int node_count = 0, i;

	if (head == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		node_count++;
		current = current->next;
	}

	if (index >= node_count)
	{
		return (NULL);
	}

	current = head;
	if (node_count == 1)
	{
		return (head);
	}
	for (i = 0; i < index; i++)
	{
		current = current->next;
	}

	return (current);
}
