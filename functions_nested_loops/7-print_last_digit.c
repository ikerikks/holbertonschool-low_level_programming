#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @a: type of value returned
 * Return: a(the last digit of a number)
 */


int print_last_digit(int a)
{

	if (a < 0)
	{
		a = a * (-1);
	}

	if (a == -2147483648)
	{
		_putchar('8');

		return (8);
	}

	_putchar(a % 10 + '0');

	return (a % 10);

}


