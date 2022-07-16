#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - deletes the head node of a linked list
 * @head: HEAD node of link list
 * @index: counter
 *
 * Return: head node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	size_t i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
