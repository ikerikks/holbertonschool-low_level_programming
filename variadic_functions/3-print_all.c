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
	int i, j;
	char *s;
	char *separator = ", ";

	va_start(ap, format);

	i = 0;
	while (format[i] != '\0')
		i++;

	j = 0;
	while (format[j] != '\0')
	{
		if (i == j - 1)
			separator = "";

		switch (format[j])
		{
			case 'c':
				printf("%c%s", va_arg(ap, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(ap, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(ap, double), separator);
				break;
			case 's':
				s = va_arg(ap, char *);
				s == NULL ? s = "(nil)" : s;
				printf("%s%s", s, separator);
				break;
		}
		j++;
	}
	va_end(ap);
	printf("\n");

}
