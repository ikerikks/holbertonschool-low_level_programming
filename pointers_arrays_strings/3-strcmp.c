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
	int i;
	int j;
	
	i = s1[0];
	j = s2[0];

	while (i && j && i == j)
	{
		j++;
		i++;
	}

	return (i - j);

}
