#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds node to end of singly linked list
 *
 * @head: list
 * @n: int to add
 * Return: new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_h = malloc(sizeof(listint_t));
	int new_n = n;

	if (new_h == NULL)
	{
		return (NULL);
	}
	new_h->n = new_n;
	new_h->next = NULL;
	if (*head == NULL)
	{
		*head = new_h;
	}
	else
	{

		listint_t *new2 = *head;

		while (new2->next != NULL)
		{
			new2 = new2->next;
		}
		new2->next = new_h;
	}
	return (new_h);
}
