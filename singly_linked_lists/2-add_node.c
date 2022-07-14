#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a linked list
 * @head: HEAD node of link list
 * @str: string
 *
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int i;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	newNode->len = i;
	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;




	return (newNode);

}
