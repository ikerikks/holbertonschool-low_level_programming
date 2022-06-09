#include "main.h"

/**
 * print_sign - prints numbers sign
 * @n: int value(number)
 * Return: (1) if n(number) is grater than 0, (0) if n is 0, (-1) otherwise
 */


void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);

	}

	else if (i == 0)
	{
		printf("%d is zero\n", i);

	}

	else
	{
		printf("%d is negative\n", i);

	}


}
