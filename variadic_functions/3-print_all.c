#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints anything
 * @format: list of type of arguments
 *
 * Return: any value
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	char c = va_arg(ap, char);
	float f = va_arg(ap, float);
	char *s = va_arg(ap, char *);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char *));

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}

	}
	va_end(ap);

	printf("\n");

}
