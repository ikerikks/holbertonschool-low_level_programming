#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: HEAD node of link list
 *
 * Return: sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	int n = 0;

	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}

	return (n);

}
