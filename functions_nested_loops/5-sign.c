#include "main.h"

/**
 * print_sign - prints numbers sign
 * @n: int value(number)
 * Return: (1) if n(number) is grater than 0, (0) if n is 0, (-1) otherwise
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);

	}

	else
	{
		_putchar('-');
		return (-1);

	}


}