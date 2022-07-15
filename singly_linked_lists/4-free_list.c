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
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}

}
