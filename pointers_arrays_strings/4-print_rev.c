#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: pointer parameter that points to the adress of a variable of type char
 *
 * Return: any value
 */


void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	;

	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
