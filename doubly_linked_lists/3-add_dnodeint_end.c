#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t list
 * @head: head node
 * @n: value to be add
 *
 * Return: the address of the new element, or NULL if failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *last;

	if (head == NULL)
		return (NULL);

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	last = *head;

	if (*head != NULL)
	{
		while (last->next != NULL)
			last = last->next;
		last->next = newNode;
	}
	else
	{
		*head = newNode;
	}
	newNode->prev = last;
	return (newNode);
}
