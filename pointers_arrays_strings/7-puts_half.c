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

	for (i = 0; str[i] != '\0'; i++)
	;


	if (i % 2 == 0)
	{
		i = i / 2;
	}

	else
	{
		i = (i + 1) / 2;
	}

	for (;str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	

	_putchar('\n');


}
