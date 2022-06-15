#include "main.h"

/**
 * puts_half - half of a string
 *
 * @str: pointer parameter pointing to a variable of type char
 *
 * Return: any value
 */

void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	;

	if ((i - 1) / 2 != 0)
	{
		for (j = (i / 2); j < i; j++)
		{
			_putchar(str[j]);
		}
	}

	else
	{
		for (j = 0; j < (i / 2); j++)
		{
			_putchar(str[j]);
		}

	}

	_putchar('\n');


}
