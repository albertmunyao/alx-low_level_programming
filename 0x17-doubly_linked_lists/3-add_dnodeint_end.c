#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of the dlistint_t list.
 * @head: Apointer to the hea of doubly singly lis
 * @n: The data source of the new node
 *
 * Return: The address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *present, *new;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));

	if(!new) 
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return (new);

	}

	present = *head;

	while (present->next !=NULL)
		present = present->next;
	{
		present = present->next;
	}

	present->next = new;
	new->prev = present;
	new->next = NULL;

	return (new);
}
