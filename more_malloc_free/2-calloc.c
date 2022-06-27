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

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr= malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);


	*ptr = 0;
	
	return (ptr);

}
