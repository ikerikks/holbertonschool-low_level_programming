#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: parameter pointing to an integer
 *
 * @b: parameter pointing to an integer
 *
 * Return: any value
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
