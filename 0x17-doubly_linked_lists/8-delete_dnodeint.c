#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head of list
 * @index: index
 * Return: 1 on success, else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i, node_count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (current->next == NULL)
	{
		*head = NULL;
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		node_count++;
		current = current->next;
	}
	if (index >= node_count)
	{
		return (-1);
	}
	current = *head;
	for (i = 0; i < index; i++)
	{
		current = current->next;
	}
	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}
	else
	{
		*head = current->next;
	}
	if (current->next != NULL)
	{
		 current->next->prev = current->prev;
	}
	free(current);
	return (1);
}

