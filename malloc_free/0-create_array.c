#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 *
 * @c: character
 *
 * @size: unsigned integer value
 *
 * Return: charater value
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	str = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (str == NULL)
		return (str);

	*str = c;

	return (str);

}
