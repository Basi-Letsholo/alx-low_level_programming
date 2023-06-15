#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - adds a node to a dlistint list
 * @head: head of linked list
 * @n: int to add
 * Return: address of new element, else NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));

	new->n = n;
	new->next = *head;
	*head = new;

	return *head;
}
