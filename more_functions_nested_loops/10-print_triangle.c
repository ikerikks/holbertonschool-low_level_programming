#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: integer parameter
 *
 * Return: any value
 */

void print_triangle(int size)
{
	int i;
	int j;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (space = 1; space < (size - i); space++)
		{
			_putchar(' ');
		}

		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

}
