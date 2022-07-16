#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: HEAD node of link list
 * @idx: index
 * @n: node data
 *
 * Return: head
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *temp;
	listint_t *newNode;

	temp = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx -1 && head != NULL; i++)
		{
			temp = temp->next;
		}
	}

	if(temp == NULL && idx != 0)
		return (NULL);
	
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;

	}

	else
	{
		newNode->next = temp->next;
		temp->next = newNode;
	}

	return (newNode);

}
