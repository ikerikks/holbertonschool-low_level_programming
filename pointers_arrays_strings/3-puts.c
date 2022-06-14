#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: pointer parameter pointing to a variable of type char
 *
 * Return: any value
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);

	}

	_putchar('\n');


}
