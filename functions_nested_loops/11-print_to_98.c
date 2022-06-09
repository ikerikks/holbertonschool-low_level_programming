#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - prints all natural numbers to 98
 *@n: integer
 *
 *Return: any value
 */


void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			i == 98 ? printf("%d", i) : printf("%d, ", i);
		}


		printf("\n");

	}

	else if (n == 98)
	{
		printf("%d\n", n);
	}

	else
	{
		for (i = n; i >= 98; i--)
		{
			i == 98 ? printf("%d", i) : printf("%d, ", i);

		}

		printf("\n");

	}

}
