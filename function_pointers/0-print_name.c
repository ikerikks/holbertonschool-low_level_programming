#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: pointer to print_name function
 *
 *Return: any value
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);

}
