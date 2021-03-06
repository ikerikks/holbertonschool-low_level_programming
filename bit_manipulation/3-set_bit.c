#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n:number given
 * @index: index
 *
 * Return: the value of the bit at index or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(n) * 8 - 1))
		return (-1);

	*n |= 1 << index;

	return (1);

}
