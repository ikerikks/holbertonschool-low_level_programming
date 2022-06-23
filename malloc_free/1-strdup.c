#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer copied by a string in a new allocated memory
 *
 * @str: string
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int size;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	;

	size = i;

	s = malloc(size + 1 * sizeof(char));
	if (s == NULL)
	{
		free(s);
		
		return (NULL);
	}

	for (i = 0; i < size; i++)
		s[i] = str[i];

	return (s);


}
