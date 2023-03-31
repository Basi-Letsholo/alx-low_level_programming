#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free a singly linked list
 *
 * @head: list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *new = head;
	list_t *a;

	while (new != NULL)
	{
		a = new->next;

		free(new->str);
		free(new);
		new = a;
	}
}
