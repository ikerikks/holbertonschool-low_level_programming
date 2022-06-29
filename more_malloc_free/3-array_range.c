#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the min value
 * @max: the max value
 *
 * Return: integer value
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if ( min > max)
		return (NULL);

	ptr = malloc(max - min + 1);

	if (ptr == NULL)
		return (NULL);

	else
		for (i = min; i < max; i++)
			ptr[0] = min;

	return (ptr);

}
