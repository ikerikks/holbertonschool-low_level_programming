#include <stdio.h>
#include "lists.h"

/**
 * listint_len - check number of elements in a linked list
 * @h: HEAD node of link list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);

}
