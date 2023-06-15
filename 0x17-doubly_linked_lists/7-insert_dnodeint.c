#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at the index
 * @h: head of list
 * @idx: index
 * @n: value of new node
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node;
	unsigned int i, node_count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL); }
	while (current != NULL)
	{
		node_count++;
		current = current->next;
	}
	if (idx >= node_count)
	{
		free(new_node);
		return (NULL);
	}
	current = *h;
	if (*h == NULL || idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (idx == node_count - 1)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			current = current->next;
		}
		new_node->n = n;
		new_node->prev = current->prev;
		new_node->next = current;
		current->prev->next = new_node;
		current->prev = new_node;
	}
	return (new_node);
}
