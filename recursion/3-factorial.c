#include "main.h"

/**
 * factorial - returns the length of a string
 *
 * @n: integer
 *
 * Return: integer value
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);

	else
		return (n * factorial(n - 1));


}
