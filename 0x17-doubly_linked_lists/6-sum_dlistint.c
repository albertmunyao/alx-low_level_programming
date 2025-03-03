#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) in a dlistint_t list.
 * @head: Head of doubly linked list
 * 
 * Return: the sum of all data(n), or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while  (head !=NULL)

	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

