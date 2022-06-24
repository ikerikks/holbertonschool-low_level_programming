#include "main.h"

/**
 * sqrt2 - finds the square root of a number
 *
 * @n: integer
 *
 * @i: integer
 *
 * Return: integer value
 */

int sqrt2(int i, int n)
{

	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (sqrt2(i + 1, n));

}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: integer
 *
 * Return: integer value
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(0, n));
}

