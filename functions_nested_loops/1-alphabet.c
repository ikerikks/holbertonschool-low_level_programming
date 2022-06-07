#include "main.h"

/**
 * print_alphabet - prints alphabet in lower case
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');


}

