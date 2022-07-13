#include <stdio.h>
#include "lists.h"

/**
 * list_len - check number of elements in a linked list
 * @h: HEAD node of link list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);

}
