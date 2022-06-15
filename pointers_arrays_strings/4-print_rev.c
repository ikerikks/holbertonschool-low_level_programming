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

	for (i = 0; s[i] != '\0'; i++)
	;

	for (i = i; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
