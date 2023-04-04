#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 *
 * @head: linked list
 * @n: int to add
 * Return: new linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_h = malloc(sizeof(listint_t));
	int new_n = n;

	if (new_h == NULL)
	{
		return (NULL);
	}
	new_h->n = new_n;
	if (*head == NULL)
	{
		new_h->next = NULL;
	}
	else
	{
		new_h->next = *head;
	}
	*head = new_h;
	return (new_h);
}
