#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print the last digit of a number
 * @a: type of value returned
 * Return: a(the last digit of a number)
 */


int print_last_digit(int a)
{
	int result;

	if (a < 0)
	{
		a = a * (-1);
	}

	result = a % 10 + '0';

	_putchar(result);

	return (a % 10);

}
