#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: HEAD node of link list
 *
 * Return: any value
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *newNode;

	if (head != NULL)
	{
		temp = *head;
		while ((newNode = temp) != NULL)
		{
			temp = temp->next;
			free(newNode);
		}

		*head = NULL;
	}


}
