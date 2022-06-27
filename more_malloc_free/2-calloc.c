#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for  an array
 *
 * @size: integer value
 *
 * @nmemb: unsigned integer value
 *
 * Return: any value
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	
	return (ptr);

}
