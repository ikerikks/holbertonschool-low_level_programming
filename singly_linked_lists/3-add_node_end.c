#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: HEAD node of link list
 * @str: string
 *
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *lastNode = *head;
	int i;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (lastNode->next != NULL)
		lastNode = lastNode->next;

	for (i = 0; str[i] != '\0'; i++)
		;

	newNode->len = i;
	newNode->str = strdup(str);
	lastNode->next = newNode;

	return (newNode);

}
