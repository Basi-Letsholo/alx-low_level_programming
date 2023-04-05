#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: list
 * Return: new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL, *new;

	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = new;
	}
	return (rev);
}
