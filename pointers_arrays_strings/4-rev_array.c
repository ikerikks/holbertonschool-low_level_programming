#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer parameter that points to the adress of a variable of type char
 *
 * @n: number of elements of the array
 *
 * Return: any value
 */


void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;

	}


}



