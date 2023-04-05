#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the n's in the linked list
 * @head: list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
