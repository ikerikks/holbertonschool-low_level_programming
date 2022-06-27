#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @max: max value of an int
 *
 * @min: min value of an int
 *
 * Return: integer value
 */

int *array_range(int min, int max)
{
	int *num;

	num = malloc(min + max);

	if (min > max)
		return (NULL);

	if (num == NULL)
		return (NULL);

	return (num);



}
