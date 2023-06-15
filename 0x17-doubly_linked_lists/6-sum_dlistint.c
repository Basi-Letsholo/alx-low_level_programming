#include "lists.h"
/**
 * sum_dlistint - finds sum of all data (n) in list
 * @head: head of linked list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
