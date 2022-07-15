#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: HEAD node of link list
 * @n: integer
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *lastNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	lastNode = *head;

	if (lastNode == NULL)
		*head = newNode;

	else
	{
		while (lastNode->next != NULL)
			lastNode = lastNode->next;

		lastNode->next = newNode;
	}

	newNode->n = n;

	return (*head);

}
