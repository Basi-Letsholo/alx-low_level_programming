#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *new = head;
	listint_t *x;

	while (new != NULL)
	{
		x = new->next;

		free (new);
		new = x;
	}
}
