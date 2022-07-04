#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: character
 * @n: number of strings
 *
 * Return: any value
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) == NULL)
			printf("(nil)");

		printf("%s", va_arg(ap, char *));
		
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}

	}
	va_end(ap);

	printf("\n");

}
