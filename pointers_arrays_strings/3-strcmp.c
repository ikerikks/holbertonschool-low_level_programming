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
	int i = *s1;
	int j = *s2;

	while (i && j && i == j)
	{
		j++;
		i++;
	}

	return (i - j);

}
