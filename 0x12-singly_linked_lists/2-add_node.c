#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * *add_node - adds a new node at the beginning of a singly linked list
 *
 * @head: linked list
 * @str: str to add to list
 * Return: new list
 */

list_t *add_node(list_t **head, const char *str)
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
	new->next = *head;
	*head = new;
	return (new);
}
