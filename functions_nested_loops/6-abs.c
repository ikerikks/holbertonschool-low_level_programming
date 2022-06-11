#include "main.h"
#include <stdlib.h>

/**
 * _abs - computes the absolute value of a integer
 * @n: int value(number)
 * Return: n value
 */


int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else if (n < 0)
	{
		n = n * (-1);

		return (n);
	}

	else
	{
		return (0);
	}

}
