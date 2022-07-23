#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n:number given
 * @index: index
 *
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index > (sizeof(n) * 8 - 1))
		return (-1);

	else
		return ((n >> index) & 1);

}
