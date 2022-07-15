#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: HEAD node of link list
 *
 * Return: any value
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}

}
