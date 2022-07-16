#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: HEAD node of link list
 *
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{

	listint_t *newHead;
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	newHead = temp->next;
	free(temp);
	*head = newHead;

	return (n);

}
