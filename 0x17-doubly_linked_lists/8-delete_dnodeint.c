#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a specific index in a doubly linked list.
 * @head: Pointer to the head of list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlitint_t *current;
	unsigned int i;


	if (!head)
		return (-1);

	curent = *head;

	if (index == 0)
	{
		*head = current->next;
		if(*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;
	if(!current)
	{
		/*Index out of range*/
		return (-1);
	}

	if (current->next != NULL)
		current->next->prev = current->prev;

if(current->prev != NULL)
current->prev->next = current->next;

free(current)
	return (1);
