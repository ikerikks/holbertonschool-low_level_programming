#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: pointer parameter pointing to a variable of type char
 *
 * Return: any value
 */

void puts2(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	;

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);

	}

	_putchar('\n');


}
