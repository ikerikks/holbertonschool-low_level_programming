#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a linked list
 * @head: HEAD node of link list
 *
 * Return: any value
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}

}
