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

	i-= 1;


	if (i / 2 != 0)
	{
		i = i + 1;
	}

	for (j = i / 2; j < i; j++)
	{
		_putchar(str[j]);
	}
	

	_putchar('\n');


}
