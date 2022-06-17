#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: pointer parameter of type char
 *
 * @s2: pointer parameter of type char
 *
 * Return: integer value
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);

}
