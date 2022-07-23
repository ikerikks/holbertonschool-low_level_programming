#include "main.h"

/**
 * flip_bits - sets the value of a bit to 0 at a given index
 * @n: number
 * @m: number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int bit;

	while ((n != 0) || (m != 0))
	{
		if ((n & 1) != (m & 1))
			bit++;

		n >>= 1;
		m >>= 1;
	}

	return (bit);

}
