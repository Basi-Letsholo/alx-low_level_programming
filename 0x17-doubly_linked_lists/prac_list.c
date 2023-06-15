#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int data;
	struct node *next;
} node_t;

int main(void)
{
	node_t *head = NULL;

	head = (node_t *)malloc(sizeof(node_t));
	if (head == NULL)
	{
		return 1;
	}

	head->data = 1;
	head->next = NULL;
}
