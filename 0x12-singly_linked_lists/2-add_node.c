#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
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
	new->next = *head;
	*head = new;
	return (new);
}
