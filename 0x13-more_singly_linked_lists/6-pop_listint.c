#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: linked list
 * Return: n (data from head node
 */

int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	int n = new->n;

	if (*head == NULL)
	{
		return (0);
	}
	*head = new->next;
	free(new);

	return (n);
}
