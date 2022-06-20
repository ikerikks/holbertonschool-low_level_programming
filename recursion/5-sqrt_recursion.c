#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: integer
 *
 * Return: integer value
 */

int _sqrt_recursion(int n)
{

	if (n == 0)
		return (0);

	else
		return (_sqrt_recursion(n - 1));


}
