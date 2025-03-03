#include<stdlib.h>
#include"lists.h"

/**
 * add _dnoident - adds a new node at the beginning 
 * @dlistint_t: location of the  header list
 * @n: The  data to store in the new node
 *
 * Return: The address of the new element
 * or  NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

/*Alocate memory for the node*/
node = malloc(sizeof(dlistint_t));

if(node == NULL)
	return (NULL);
/*
 * assign data
 * set the n field to the value
 * set the  prev pointer of the cureent head
 */

node-> = n;
node-> = NULL;
node-> = *head;

if (*head != NULL)
	(*head)->prev = node;

/* new node*/
*head = node;

return (node);
