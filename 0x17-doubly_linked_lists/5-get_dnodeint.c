#include "lists.h"

/**
 * get_dnodeint_at_index - writes a function that returns nth node of a dlistint_t
 * @head: Pointer to the head of list
 * @index: Index of the node to return, starting from 0.
 *
 * Return: The nth node of the list , or null if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if(!head)
		return (NULL);

	while (head && count < index)
	
	{
	  head = head->next;
	  count++;
	}

	if (head)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
