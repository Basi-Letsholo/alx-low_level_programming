#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * *add_node_end - adds a new node at the end of a singly linked list
 *
 * @head: list
 * @str: str to add
 * Return: new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	char *nstr = strdup(str);

	if (new == NULL)
	{
		return (NULL);
	}
	if (nstr == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = nstr;
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		list_t *new2 = *head;

		while (new2->next != NULL)
		{
			new2 = new2->next;
		}
		new2->next = new;
	}
	return (new);
}
