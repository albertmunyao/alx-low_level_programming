#include "lists.h"

/**
 * free_dlistint - frees a dlisttint_t list.
 * @head: THe head of lists
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head !=NULL)
	{
		new = head->next;
		free(head);
		head = new;
	}
free(head);
}

