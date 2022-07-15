#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a structure list
 * @h: HEAD node of link list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);

}
