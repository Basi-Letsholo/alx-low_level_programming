#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		free(current);
		current = current->next;
	}
}
