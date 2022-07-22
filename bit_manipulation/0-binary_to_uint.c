#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary characters
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int m = 0, n = 0;
	unsigned int i = 1;

	if (b == NULL)
		return (0);

	while (b[m])
		m++;

	while (m)
	{
		if (b[m - 1] != '0' && b[m - 1] != '1')
			return (0);

		if (b[m - 1] == '1')
			n += i;

		i *= 2;
		m--;
	}

	return (n);
}
